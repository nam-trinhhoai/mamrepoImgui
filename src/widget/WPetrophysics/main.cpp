
#include "PlotWellLog.h"

int main(int, char**)
{
    PlotWellLog pwl;
	pwl.show();

    return 0;
}


/**
#include "SDL.h"

void crossHairCursor(SDL_Window* window)
{

	SDL_Renderer* renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

        SDL_bool done = SDL_FALSE;

        while (!done) {
			int x, y;
			Uint32 buttons;

			SDL_PumpEvents();  // make sure we have the latest mouse state.

			buttons = SDL_GetMouseState(&x, &y);

			SDL_DisplayMode DM;
			SDL_GetCurrentDisplayMode(0, &DM);

			SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
			SDL_RenderClear(renderer);

			SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
			SDL_RenderDrawLine(renderer, 0, y, DM.w, y);
			SDL_RenderDrawLine(renderer, x, 0, x, DM.h);
	

			SDL_RenderPresent(renderer);

			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				if (event.type == SDL_QUIT) {
					done = SDL_TRUE;
				}
			}			
        }
    

    if (renderer) {
        SDL_DestroyRenderer(renderer);
    }
}

int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) == 0) {
       	SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    	SDL_Window* window = SDL_CreateWindow("Well Log Viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);


        crossHairCursor(window);

        if (window) {
            SDL_DestroyWindow(window);
        }
    }
    SDL_Quit();
    return 0;
}
*/

