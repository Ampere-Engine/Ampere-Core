#include "log.hpp"

#include "spdlog/spdlog.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

namespace Ampere {
    
    Log::Log() {}

    Log::~Log() {}
    
    void Log::Init() {
        spdlog::info("Welcome to spdlog!");
    }
}