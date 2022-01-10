#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace Ampere {
    namespace Graphics {
        #define MAX_KEYS    1024
        #define MAX_BUTTONS 32

        class Window {
            private:
                const char *m_Name;
                int m_Width, m_Height;
                bool m_Closed;
                GLFWwindow *m_Window;

                static bool m_Keys[MAX_KEYS];
                static bool m_MouseButtons[MAX_BUTTONS];
                static double ox, oy;

            public:
                Window(const char *name, int width, int height);
                ~Window();
                void clear() const;
                bool closed() const;
                void update();

                inline int getWidth() const { return m_Width; }
                inline int getHeight() const { return m_Height; }

                static bool isKeyPressed(unsigned int keycode);
            
            private:
                bool init();
                friend void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
        };
    };
}
