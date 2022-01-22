#pragma once

#include "core/core.hpp"
#include "events/event.hpp"

namespace Ampere {
    class AMPERE_API App {
        public:
            App();
            ~App();
            void CreateApp();
            void Run();
    };
}