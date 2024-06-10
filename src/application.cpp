#include "application.hpp"

#include <iostream>

#include <SDL2/SDL.h>

#include "windowing/window.hpp"

void run_app() {
	if ( SDL_Init(SDL_INIT_VIDEO) < 0 ) {
		std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
		return;

	}
	windowing::window window("Hello, World!", 800, 600);
	SDL_Event e;
	bool running = true;
	while (running) {
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				running = false;
			}
		}
		SDL_Delay(16);
	}

	SDL_Quit();
}