#pragma once

// includes //

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define GLM_FORCE_RADIANS 1
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <SDL2/SDL.h>

#include "glad/glad.h"

// variables declaration //

extern const int SCREEN_FULLSCREEN;
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern SDL_Window* window;
extern SDL_GLContext maincontext;

extern unsigned int shaderProgram;

// function declaration //

void sdl_die(const char* message);
void init_screen(const char* caption);

void create_shader_program();
void render_triangle(float vertices[]);
