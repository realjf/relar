#ifndef __RELAR_LOG_HPP__
#define __RELAR_LOG_HPP__

#include <string>
#include <stdint.h>
#include <memory>

namespace relar
{
    class LogEvent {
        public:
            typedef std::shared_ptr<LogEvent> ptr;
            LogEvent();
        private:
            const char* m_file = nullptr;
            int32_t m_line = 0;
            uint32_t m_threadId = 0;
            uint32_t m_fiberId = 0;
            uint64_t m_time;
            std::string m_content;

    };
    // 日志输出器
    class Logger
    {
    public:
        typedef std::shared_ptr<Logger> ptr;
        enum Level {
            DEBUG = 1,
            INFO = 2,
            WARN = 3,
            ERROR = 4,
            FATAL = 5
        };
        Logger(const std::string& name = "root");

        void log(Level level, const LogEvent& event);
    private:
        std::string m_name;
        LogAppender::ptr
    };

    // 日志输出路径
    class Appender
    {
    public:
        virtual ~Appender();

    private:
    };

    class LogFormatter
    {
    };

} // namespace relar

#endif
