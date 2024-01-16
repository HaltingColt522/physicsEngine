
#include "main.h"

const std::vector< SDL_Vertex > verts =
{
    { SDL_FPoint{ 400, 150 }, SDL_Color{ 255, 0, 0, 255 }, SDL_FPoint{ 0 }, },
    { SDL_FPoint{ 200, 450 }, SDL_Color{ 0, 0, 255, 255 }, SDL_FPoint{ 0 }, },
    { SDL_FPoint{ 600, 450 }, SDL_Color{ 0, 255, 0, 255 }, SDL_FPoint{ 0 }, },
};


int main(int argc, char* argv[]) {
    // create window //
    init_screen("physics engine");

    // main loop //
    SDL_Event event;
    bool quit = false;
    while (!quit) {
        SDL_GL_SwapWindow(window);
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);
        SDL_RenderGeometry(renderer, nullptr, verts.data(), verts.size(), nullptr, 0);
        SDL_RenderPresent(renderer);
    
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}