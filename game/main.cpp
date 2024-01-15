
#include "main.h"

int main(int argc, char* argv[]) {
    // create window //
    init_screen("OpenGL 4.5");

    // create shader // TODO: make shader_source customable

    create_shader_program();

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
        // GL Drawing //
        glClear(GL_COLOR_BUFFER_BIT);
    }
    return 0;
}