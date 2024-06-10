#include "window.hpp"

#include <iostream>

namespace windowing {

window::window(const std::string& title, int width, int height) {
	m_window = SDL_CreateWindow(
		title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		width,
		height,
		SDL_WINDOW_SHOWN
	);
	m_renderer = SDL_CreateRenderer(m_window, -1, 0);
	SDL_SetRenderDrawColor(m_renderer, 12, 12, 24, 255);
	SDL_RenderClear(m_renderer);
	SDL_RenderPresent(m_renderer);
}

window::~window() {
	//SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
}

}