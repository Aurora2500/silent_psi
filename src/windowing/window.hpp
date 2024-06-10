#include <SDL2/SDL.h>
#include <string>

namespace windowing {

class window {
private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;

public:
	window(const std::string& title, int width, int height);
	~window();
};

}