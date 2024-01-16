#include "main.h"

void draw_triangle(unsigned int shaderProgram, GLuint vertexBuffer) {
    /// draw our first triangle
    glUseProgram(shaderProgram);
    glBindVertexArray(vertexBuffer); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
    glDrawArrays(GL_TRIANGLES, 0, 3);
}