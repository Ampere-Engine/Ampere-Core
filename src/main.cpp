#include "graphics/window.hpp"
using namespace ampere;

int main() {
    using namespace graphics;

    Window window("Ampeere!", 1400, 700);
    glClearColor(0.0f, 0.6f, 0.8f, 1.0f);

    while (!window.closed()) {
        window.clear();
        glBegin(GL_QUADS);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();
        window.update();
    }

    return 0;
}