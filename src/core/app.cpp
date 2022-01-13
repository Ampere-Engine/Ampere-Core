#include "app.hpp"
#include "../ampinc.hpp"

namespace Ampere {
    App::App() {}
    App::~App() {}

    void App::Run() {
        std::cout<<"App is running"<<std::endl;
    }

    void App::CreateApp() {
        std::cout<<"Creating";
    }
}