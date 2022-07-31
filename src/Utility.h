#pragma once

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#define log_critical(...) SPDLOG_CRITICAL(__VA_ARGS__)
#define log_error(...) SPDLOG_ERROR(__VA_ARGS__)
#define log_info(...) SPDLOG_INFO(__VA_ARGS__)
#define log_debug(...) SPDLOG_DEBUG(__VA_ARGS__)
#define log_trace(...) SPDLOG_TRACE(__VA_ARGS__)

namespace Utility
{
    // Return curent build process is in debug or not.
    inline bool IsDebug()
    {
        #ifdef _DEBUG
            return true;
        #else
            return false;
        #endif
    }
}