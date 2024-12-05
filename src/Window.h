#include "include/SDL2/SDL.h"
#include <iostream>
using namespace std;

struct Color {
public:
	Uint8 r;
	Uint8 g;
	Uint8 b;
	Uint8 a;
};

class Window {
public:
	int width;
	int height;
	const char* title;

	int fps = 60;
	int frame_delay = 16;


	bool running = false;

	uint32_t time_of_last_frame = SDL_GetTicks();

	uint32_t delta;

	SDL_Window* window;
	SDL_Renderer* renderer;

	Window(const char* t, int w, int h) {
		SDL_Init(SDL_INIT_EVERYTHING);
		window = SDL_CreateWindow(t, 200, 100, w, h, SDL_WINDOW_SHOWN);
		SDL_SetWindowResizable(window, SDL_TRUE);
		renderer = SDL_CreateRenderer(window, -1, 0);
		running = true;

		title = t;
		width = w;
		height = h;

		clear();
	}

	void handle_event() {
		SDL_Event event;
		SDL_PollEvent(&event);
		switch (event.type) {
			case SDL_QUIT:
				running = false;
				clean();
				break;
			default:
				break;
		}
	}

	void update_delta() {
		uint32_t now = SDL_GetTicks();
		delta = now - time_of_last_frame;
		time_of_last_frame = now;

		// Change title to include the framerate
		char fr_data[32];
		snprintf(fr_data, sizeof fr_data, "%f", 1000.0/ (double)delta);
		SDL_SetWindowTitle(window, fr_data);
	}

	void draw_rect(int x, int y, int w, int h, Color c) {
		SDL_SetRenderDrawColor(renderer, c.r, c.g, c.b, c.a);
		SDL_Rect rect = SDL_Rect();
		rect.x = x;
		rect.y = y;
		rect.h = w;
		rect.w = h;
		SDL_RenderFillRect(renderer, &rect);
	}
	
	void clear() {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);
	}

	void _draw() {
		SDL_RenderPresent(renderer);
		update_delta();
		hold_to_fps();
	}

	void draw() {
		_draw();
	}

	void clean() {
		SDL_DestroyWindow(window);
		SDL_DestroyRenderer(renderer);
		SDL_Quit();
	}

	void hold_to_fps() {
		if (delta < 16)
			SDL_Delay(16 - delta);
	}
};