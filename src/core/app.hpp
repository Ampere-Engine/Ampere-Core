#pragma once

#include "core.hpp"

namespace Ampere {
    class AMPERE_API App {
        public:
            App();
            virtual ~App();
            void Run();

            // On in client
    };
    App* CreateApp();
}