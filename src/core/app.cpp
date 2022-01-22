#include "app.hpp"
#include "log.hpp"
#include "ampinc.hpp"

#include "events/event_window.hpp"

namespace Ampere {
    App::App() {
        Log log; // Log init
        m_Window = std::unique_ptr<Window>(Window::Create());

        AMP_INFO("Creating app");
    }
    App::~App() {}

    void App::Run() {
        while (m_Running) {
            // glClearColor(0.0, 0.6, 0.8, 1);
            m_Window->OnUpdate();
        }
    }
}