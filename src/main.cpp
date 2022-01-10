#include "graphics/window.hpp"
#include <iostream>
using namespace Ampere;

int main() {
    using namespace Graphics;

    Window window("Ampeere!", 1400, 700);
    glClearColor(0.0f, 0.6f, 0.8f, 1.0f);

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    while (!window.closed()) {
        window.clear();
        if (window.isKeyPressed(GLFW_KEY_A)) {
            std::cout<<"A"<<std::endl;
        }
#if 1
        glBegin(GL_QUADS);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();
#endif
        glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
        window.update();
    }

    return 0;
}