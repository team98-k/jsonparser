#include "Utility.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

void InitializeLogging()
{
    if (Utility::IsDebug()) {
        auto console = spdlog::stdout_color_mt("console");
        spdlog::set_default_logger(console);
        spdlog::set_level(spdlog::level::debug);
        spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] [%s:%#] %v");
    }
}

int main()
{
    InitializeLogging();

    log_debug("Program launched in debug");

    return 0;
}