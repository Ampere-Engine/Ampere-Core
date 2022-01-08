#include <iostream>
#include <GLFW/glfw3.h>
#include "window.hpp"

namespace ampere {
    namespace graphics {
        Window::Window(const char *name, int width, int height) {
            m_Name = name;
            m_Width = width;
            m_Height = height;
            if(!init()) {
                glfwTerminate();
            };
        }

        Window::~Window() {
            glfwTerminate();
        }

        bool Window::init() {

            if (!glfwInit()) {
                std::cout<<"GLFW initialization failed!"<<std::endl;
                return false;
            } else {
                std::cout<<"GLFW initialization succeeded"<<std::endl;
            }

            m_Window = glfwCreateWindow(m_Width, m_Height, m_Name, NULL, NULL);
            if (!m_Window) {
                glfwTerminate();
                std::cout << "Failed to create window" << std::endl;
                return false;
            }
            glfwMakeContextCurrent(m_Window);
            return true;
        }

        bool Window::closed() const {
            return glfwWindowShouldClose(m_Window);
        }

        void Window::update() const {
            glfwPollEvents();
            glfwSwapBuffers(m_Window);
        }
    }
}