#pragma once

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#define log_critical(...) SPDLOG_CRITICAL(__VA_ARGS__)
#define log_error(...) SPDLOG_ERROR(__VA_ARGS__)
#define log_warn(...) SPDLOG_WARN(__VA_ARGS__)
#define log_info(...) SPDLOG_INFO(__VA_ARGS__)
#define log_debug(...) SPDLOG_DEBUG(__VA_ARGS__)
#define log_trace(...) SPDLOG_TRACE(__VA_ARGS__)

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace log {
    // 빌드 타입의 디버그 여부 반환.
    inline bool IsDebug();

    // spdlog 디버그 로그 활성화.
    void InitializeLogging();
}