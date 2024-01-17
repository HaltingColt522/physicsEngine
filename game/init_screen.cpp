#include "main.h"


const int SCREEN_WIDTH = 960;
const int SCREEN_HEIGHT = 540;
SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;

void sdl_die(const char* message) {
    fprintf(stderr, "%s: %s\n", message, SDL_GetError());
    exit(2);
}

void init_screen(const char* caption) {
    // Initialize SDL 
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        sdl_die("Couldn't initialize SDL");
    atexit(SDL_Quit);
    SDL_GL_LoadLibrary(NULL); // Default OpenGL is fine.

    window = SDL_CreateWindow(caption, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);


}