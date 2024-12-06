﻿#include <iostream>
#include <vector>
#include <math.h>
#include "Window.h"

using namespace std;

class Vector2D
{
public:
	double x;
	double y;

	Vector2D(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

	void apply(Vector2D other)
	{
		x += other.x;
		y += other.y;
	}

	Vector2D mul(Vector2D other)
	{
		return Vector2D(x * other.x, y * other.y);
	}
	Vector2D mul(double other)
	{
		return Vector2D(x * other, y * other);
	}
	Vector2D sub(Vector2D other)
	{
		return Vector2D(x - other.x, y - other.y);
	}
	Vector2D sub(double other)
	{
		return Vector2D(x - other, y - other);
	}

	Vector2D clone()
	{
		return Vector2D(x, y);
	}
	double mag()
	{
		return sqrt(x * x + y * y);
	}
	double dot(Vector2D &other)
	{
		return x * other.x + y * other.y;
	}
};

class Material
{
public:
	double density = 1.0;
	double insulation = 1.0;

	bool has_collision = true;

	bool has_gravity = true;
	double gravitational_constant = 1.0;
	vector<Material *> materials_effected_by_gravity = {};

	Material(
		double _density,
		double _insulation,
		bool _has_collision,
		bool _has_gravity,
		double _gravitational_constant,
		vector<Material *> _materials_effected_by_gravity)
	{
		density = _density;
		insulation = _insulation;
		has_collision = _has_collision;
		has_gravity = _has_gravity;
		gravitational_constant = _gravitational_constant;
		materials_effected_by_gravity = materials_effected_by_gravity;
	}
	Material() {};
};

class Particle
{
public:
	double RADIUS = 1.0;

	Vector2D position = Vector2D(0.0, 0.0);
	Vector2D velocity = Vector2D(0.0, 0.0);
	Color color = Color{255, 255, 255, 255};
	Material material = Material();

	Particle(Vector2D _position, Vector2D _velocity, Color _color, Material _material)
	{
		position = _position;
		velocity = _velocity;
		color = _color;
		material = _material;
	}

	void _move(float delta)
	{
		position.apply(velocity.mul(delta * 0.001));
		velocity = velocity.mul(material.insulation);
	}

	virtual void update(float delta, Window *w)
	{
		_move(delta);
	}

	void collide_with(Particle &other)
	{
		Vector2D v1 = velocity.clone();
		Vector2D v2 = other.velocity.clone();
		Vector2D p1 = position.clone();
		Vector2D p2 = other.position.clone();

		double sum_of_mass = material.density + other.material.density;

		if (sum_of_mass == 0)
		{
			return;
		}

		// Point A
		Vector2D positn_diff = p1.sub(p2);
		double d = positn_diff.mag();
		double dot_den = d * d;

		if (d >= RADIUS && dot_den != 0.0)
		{
			return;
		}

		Vector2D vector_diff = v1.sub(v2);
		double mass_effector = (2.0 * other.material.density) / sum_of_mass;
		double dot_num = vector_diff.dot(positn_diff);
		velocity.apply(positn_diff.mul(-mass_effector * (dot_num / dot_den)));
		position.apply(positn_diff.mul(RADIUS - d));

		// Point B
		mass_effector = (2.0 * material.density) / sum_of_mass;
		vector_diff = v2.sub(v1);
		positn_diff = p2.sub(p1);
		dot_num = vector_diff.dot(positn_diff);
		other.velocity.apply(positn_diff.mul(-mass_effector * (dot_num / dot_den)));
		other.position.apply(positn_diff.mul(RADIUS - d));
	}
};

class Game : public Window
{
public:
	// Window				window			=	Window("Demo", 10, 10);
	vector<Particle> particles = {};
	vector<Particle> pending_queue = {};
	vector<Particle *> removal_queue = {};

	int CELL_SIZE = 8;
	int CELL_COUNT_X = 160;
	int CELL_COUNT_Y = 90;

	Game(const char *t, int w, int h)
		: Window(t, w, h)
	{
		title = t;
		CELL_COUNT_X = w;
		CELL_COUNT_Y = h;
		width = CELL_COUNT_X * CELL_SIZE;
		height = CELL_COUNT_Y * CELL_SIZE;
	}

	void correct_particle_vectors()
	{
		while (pending_queue.size() > 0)
		{
			particles.push_back(pending_queue.at(pending_queue.size() - 1));
			pending_queue.pop_back();
		}
		while (removal_queue.size() > 0)
		{
			Particle *current = removal_queue.at(0);
			for (int i = 0; i < particles.size(); i++)
			{
				if (&particles[i] == current)
				{
					particles[i] = particles.back();
					particles[particles.size() - 1] = particles[i];
					particles.pop_back();
				}
			}
		}
	}

	void update()
	{
		// correct_particle_vectors();
		for (Particle &p : particles)
		{
			p.update(delta, this);
		}
		// particles[0].collide_with(particles[1]);
		for (int i = 0; i < particles.size() - 1; i++)
		{
			for (int j = i + 1; j < particles.size(); j++)
			{
				particles[i].collide_with(particles[j]);
			}
		}
	}

	void draw()
	{
		for (Particle p : particles)
		{
			draw_rect(
				p.position.x * CELL_SIZE,
				p.position.y * CELL_SIZE,
				CELL_SIZE,
				CELL_SIZE,
				p.color);
		}
		_draw();

		char fr_data[5];
		snprintf(fr_data, sizeof fr_data, "%f", particles.size());
		SDL_SetWindowTitle(window, fr_data);
	}

	void run()
	{
		while (running)
		{
			clear();
			update();
			handle_event();
			draw();
			// hold_to_fps();
		}
	}

	void add_particle(const Particle &p)
	{
		particles.push_back(p);
	}

	void remove_particle(Particle *p)
	{
		removal_queue.push_back(p);
	}
};

class Velocitometer : public Particle
{
public:
	Color static_color = Color{255, 255, 255, 255};

	Velocitometer(Vector2D pos, Vector2D vel, Material mat) : Particle(pos, vel, static_color, mat)
	{
		color = static_color;
	}

	void update(float delta, Window* w) override
	{
		_move(delta);
		// if (velocity.mag() > 0.0001)
		// {
		velocity.x += 1;
			color = Color{255, 255, 255, 200};
		// }
	}

};

int main(int argc, char **argv)
{
	Game g = Game("Cupcake", 600, 600);

	g.add_particle(
		Particle(
			Vector2D(80, 80),
			Vector2D(-10.0, -10.0),
			Color{255,0,0,255},
			Material(999.0, 1.0, true, false, 0.0, {})));

	for (double x = 0; x < 50; x += 1.0)
	{
		for (double y = 0; y < 50; y += 1.0)
		{
			g.add_particle(
				Velocitometer(
					Vector2D(x, y),
					Vector2D(0.0, 0.0),
					Material(1.0, 1.0, true, false, 0.0, {})));
		}
	}

	// g.correct_particle_vectors();
	// if (g.particles.size() == )
	g.run();

	return 0;
}