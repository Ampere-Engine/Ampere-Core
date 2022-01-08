#include <GLFW/glfw3.h>

#pragma once

namespace ampere {
    namespace graphics {
        class Window {
            private:
                const char *m_Name;
                int m_Width, m_Height;
                bool m_Closed;
                GLFWwindow *m_Window;

                bool init();
            public:
                Window(const char *name, int width, int height);
                ~Window();
                bool closed() const;
                void update() const;
        };
    };
}