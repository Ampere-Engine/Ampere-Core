#include "log.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

namespace Ampere {
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    Log::Log() {
        Init();
        GetCoreLogger()->info(">-- Ampere Engine --<");
        GetClientLogger()->warn("Hello");
    };
        
    void Log::Init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        spdlog::info("Welcome to spdlog!");
        s_CoreLogger = spdlog::stdout_color_mt("Ampere");
        s_CoreLogger->set_level(spdlog::level::trace);
        s_ClientLogger = spdlog::stdout_color_mt("App");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}