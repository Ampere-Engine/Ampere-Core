#include <iostream>
#include <GLFW/glfw3.h>

#define GLFW_DLL

int main() {
    if (!glfwInit()) {
        std::cout<<"GLFW initialization failed! \n";
    } else {
        std::cout<<"GLFW initialization succeeded! OH MY FUCKING GOD \n";
    }
    return 0;
}