#include <iostream>
#include <GLFW/glfw3.h>
#include "graphics/window.hpp"

#define GLFW_DLL

int main() {
    using namespace ampere;
    using namespace graphics;

    Window window("Ampeere!", 1400, 700);
    while (!window.closed()) {
        window.update();
    }

    return 0;
}