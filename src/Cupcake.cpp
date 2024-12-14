#include "Physics_Engine.h"

int main(int argc, char **argv)
{
	Camera cam = Camera();
	cam.position = Vector2D(-250,-100);
	Game g = Game("Cupcake", 1000, 600);

	g.cam = &cam;

	Material wall = Material(0.01, 1.0, true, true, true);

	Material bullet = Material(10.0, 0.0, false, true, true);
	wall.materials_effected_by_gravity.push_back(&wall);
	bullet.materials_effected_by_gravity.push_back(&wall);
	wall.materials_effected_by_gravity.push_back(&bullet);
	bullet.materials_effected_by_gravity.push_back(&bullet);

	// g.add_particle(
	// 	new Tracker(
	// 		Vector2D(22.0, 22.0),
	// 		Vector2D(0, 0),
	// 		&wall,
	// 		&cam));

	g.add_particle(
		new Particle(
			Vector2D(0, 0),
			Vector2D(0,0),
			&bullet
		)
	);
	for (float x = -50; x < 100; x += 3)
	{
		for (float y = -50; y < 100; y += 3)
		{
			if (
				(x==30 && y == 30) || 
				sqrt((x-30)*(x-30) + (y-30)*(y-30)) > 50
			) continue;
			// if (x != 75 || y != 75) {
			g.add_particle(
				new Particle(
					Vector2D(x, y),
					Vector2D(0, 0),
					Color{255,200,100,255},
					&wall));
					// }
		}
	}

	g.run();

	return 0;
}