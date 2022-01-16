#include "app.hpp"
#include "log.hpp"
#include "../ampinc.hpp"

namespace Ampere {
    App::App() {}
    App::~App() {}

    void App::Run() {
        std::cout<<"App is running"<<std::endl;
    }

    void App::CreateApp() {
        Log log;
        std::cout<<"Creating";
    }
}