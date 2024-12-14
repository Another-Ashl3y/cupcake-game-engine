#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include "Window.h"

using namespace std;

class Vector2D
{
public:
	float x;
	float y;

	Vector2D(float _x, float _y)
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
	Vector2D mul(float other)
	{
		return Vector2D(x * other, y * other);
	}
	Vector2D sub(Vector2D other)
	{
		return Vector2D(x - other.x, y - other.y);
	}
	Vector2D sub(float other)
	{
		return Vector2D(x - other, y - other);
	}
	Vector2D add(Vector2D other)
	{
		return Vector2D(x + other.x, y + other.y);
	}
	Vector2D add(float other)
	{
		return Vector2D(x + other, y + other);
	}

	Vector2D clone()
	{
		return Vector2D(x, y);
	}
	float mag()
	{
		return sqrt(x * x + y * y);
	}
	float dot(Vector2D &other)
	{
		return x * other.x + y * other.y;
	}
	Vector2D normalized() {
		float magn = mag();
		if (magn == 0.0) return Vector2D(0.0, 0.0);
		return Vector2D(x/magn, y/magn);
	}
};

class IntVector2D {
public:
	int x;
	int y;

	IntVector2D(int _x, int _y) 
	{
		x = _x;
		y = _y;
	}
};

class Material
{
public:
	float density = 1.0;
	float insulation = 1.0;

	bool moveable = true;
	bool has_collision = true;

	bool has_gravity = true;
	float gravitational_constant = 1.0;
	vector<Material *> materials_effected_by_gravity = {};

	Material(
		float _density,
		float _insulation,
		bool _moveable,
		bool _has_collision,
		bool _has_gravity)
	{
		density = _density;
		insulation = _insulation;
		moveable = _moveable;
		has_collision = _has_collision;
		has_gravity = _has_gravity;
	}
	Material() {};
};

Material DEFAULT = Material();

class Particle
{
public:
	float RADIUS = 1.0;

	Vector2D position = Vector2D(0.0, 0.0);
	Vector2D velocity = Vector2D(0.0, 0.0);
	Color color = Color{255, 255, 255, 255};
	Material* material = &DEFAULT;

	vector<Particle*> collisions = {};


	Particle(Vector2D _position, Vector2D _velocity, Color _color, Material* _material)
	{
		position = _position;
		velocity = _velocity;
		color = _color;
		material = _material;
	}

	void _move(float delta)
	{
		if (material->moveable) {
			position.apply(velocity.mul(delta * 0.001));
			velocity = velocity.mul(material->insulation);
		}
	}

	bool translate(Vector2D dir, float distance) {
		if (material->moveable) {
			position.apply(dir.mul(distance));
		}
		return material->moveable;
	}

	virtual void update(float delta, Window *w)
	{
		_move(delta);
	}

	void collide_with(Particle *other)
	{
		Vector2D v1 = velocity.clone();
		Vector2D v2 = other->velocity.clone();
		Vector2D p1 = position.clone();
		Vector2D p2 = other->position.clone();

		float sum_of_mass = material->density + other->material->density;

		if (sum_of_mass == 0)
		{
			return;
		}

		// Point A
		Vector2D positn_diff = p1.sub(p2);
		float d = positn_diff.mag();
		float dot_den = d * d;

		if (dot_den == 0.0) return;

		for (int i=0; i<material->materials_effected_by_gravity.size(); i++) {
			if (other->material == material->materials_effected_by_gravity[i]) 
			{
				Vector2D direction = positn_diff.normalized();
				float force = (other->material->density * material->density * (material->gravitational_constant + other->material->gravitational_constant)*0.5)/dot_den;
				velocity.apply(direction.mul(-force/material->density));
				other->velocity.apply(direction.mul(force/other->material->density));
			}
		}

		if (d >= RADIUS) return;

		other->collisions.push_back(this);
		collisions.push_back(other);

		Vector2D vector_diff = v1.sub(v2);
		float mass_effector = (2.0 * other->material->density) / sum_of_mass;
		float dot_num = vector_diff.dot(positn_diff);
		if(translate(positn_diff, RADIUS - d))
			velocity.apply(positn_diff.mul(-mass_effector * (dot_num / dot_den)));

		// Point B
		mass_effector = (2.0 * material->density) / sum_of_mass;
		vector_diff = v2.sub(v1);
		positn_diff = p2.sub(p1);
		dot_num = vector_diff.dot(positn_diff);
		if (other->translate(positn_diff, RADIUS - d))
			other->velocity.apply(positn_diff.mul(-mass_effector * (dot_num / dot_den)));
		

		
	}

	IntVector2D chunk() {
		return IntVector2D(position.x/16, position.y/16);
	}
};

bool contains(vector<IntVector2D*> arr, IntVector2D &item) {
	for (int i=0; i<arr.size(); i++) {
		if (arr[i]->x == item.x && arr[i]->y == item.y) {
			return true;
		}
	}
}

class Camera 
{
	public:
	Vector2D position = Vector2D(0, 0);
};


class Game : public Window
{
public:
	vector<Particle *> particles = {};
	vector<Particle *> pending_queue = {};
	vector<Particle *> removal_queue = {};

	Camera *cam;

	int CELL_SIZE = 6;
	int CELL_COUNT_X = 160;
	int CELL_COUNT_Y = 90;

	// std::map<IntVector2D, vector<Particle *>> chunks = {};

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
				if (particles[i] == current)
				{
					particles[i] = particles.back();
					particles[particles.size() - 1] = particles[i];
					particles.pop_back();
				}
			}
		}
	}

	// void update_chunks() {
	// 	for (Particle* p : particles) 
	// 	{
	// 		IntVector2D chunk_position = p->chunk();
	// 		if (chunks.count(chunk_position) > 0) 
	// 		{
	// 			chunks.at(chunk_position).push_back(p);
	// 		} else {
	// 			chunks[chunk_position] = {p};
	// 		}
	// 	}
	// }

	void update()
	{
		for (Particle* p : particles)
		{
			p -> update(delta*2, this);
		}

		for (int i=0; i<particles.size(); i++) {
			for (int j=i+1; j<particles.size(); j++) {
				particles[i]->collide_with(particles[j]);
			}
		}

		// vector<IntVector2D *> processed_chunks {};
		// vector<IntVector2D> keys {};

		// for (auto chunk : chunks) {
		// 	keys.push_back(chunk.first);
		// }

		// for (Particle* p : particles)
		// {
		// 	IntVector2D chunk_position = p->chunk();
		// 	if (contains(keys, chunk_position)) {

		// 	}
		// }
	}

	void draw()
	{
		for (Particle *p : particles)
		{
			_draw_rect(
				//      vvv-- fixes gaps between particles.
				(int) ( 0.5 * (p->position.x - cam->position.x)) * CELL_SIZE,
				(int) ( 0.5 * (p->position.y - cam->position.y)) * CELL_SIZE,
				CELL_SIZE,
				CELL_SIZE,
				p->color);
		}
		_draw();

		// char fr_data[5];
		// snprintf(fr_data, sizeof fr_data, "%f", particles.size());
		// SDL_SetWindowTitle(window, fr_data);
	}

	void run()
	{
		while (running)
		{
			_clear();
			update();
			_handle_event();
			draw();
			// hold_to_fps();
		}
	}

	void add_particle(Particle* p)
	{
		particles.push_back(p);
	}

	void remove_particle(Particle *p)
	{
		removal_queue.push_back(p);
	}
};
