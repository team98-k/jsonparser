#include "Log.h"

namespace log {
    inline bool IsDebug()
    {
        #ifdef _DEBUG
            return true;
        #else
            return false;
        #endif
    }

    void InitializeLogging()
    {
        if (IsDebug()) {
            auto console = spdlog::stdout_color_mt("console");
            spdlog::set_default_logger(console);
            spdlog::set_level(spdlog::level::debug);
            spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] [%s:%#] %v");
        }
    }
}