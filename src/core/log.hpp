#pragma once

#include "core.hpp"
#include <spdlog/spdlog.h>

namespace Ampere {
    class AMPERE_API Log {
        public:
            Log();
            void Init();
            inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
            inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
        private:
            static std::shared_ptr<spdlog::logger> s_CoreLogger;
            static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}
