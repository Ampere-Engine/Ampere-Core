#pragma once

#include "core.hpp"
#include "app.hpp"

#ifdef AMP_PLATFORM_WINDOWS

extern Ampere::App* Ampere::CreateApp();

int main(int argc, char** argv) {
    auto app = Ampere::CreateApp();
    app->Run();
    delete app;
}

#endif