#include "app.hpp"
#include "log.hpp"
#include "ampinc.hpp"

#include "events/event_window.hpp"

namespace Ampere {
    App::App() {
        Log log; // Log init
    }
    App::~App() {}

    void App::Run() {
        WindowResizeEvent e(1200, 720);
        AMP_DEBUG(e);
        std::cout<<"App is running"<<std::endl;
    }

    void App::CreateApp() {
        std::cout<<"Creating"<<std::endl;
    }
}