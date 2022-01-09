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
                inline int getWidth() const { return m_Width; }
                inline int getHeight() const { return m_Height; }

            public:
                Window(const char *name, int width, int height);
                ~Window();
                void clear() const;
                bool closed() const;
                void update();
        };
    };
}
