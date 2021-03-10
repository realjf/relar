#include <iostream>
#include <thread>
#include "../relar/log.hpp"
#include "../relar/util.hpp"

int main(int argc, char** argv){
    relar::Logger::ptr logger(new relar::Logger);
    logger->addAppender(relar::LogAppender::ptr(new relar::StdoutLogAppender));

    // relar::LogEvent::ptr event(new relar::LogEvent(__FILE__,__LINE__,0, relar::GetThreadId(), relar::GetFiberId(), time(0)));

    // logger->log(relar::LogLevel::DEBUG, event);
    std::cout << "hello relar log" << std::endl;
    RELAR_LOG_INFO(logger) << "test macro";
    RELAR_LOG_ERROR(logger) << "test macro error";

    RELAR_LOG_FMT_ERROR(logger, "test macro fmt error %s", "aa");
    return 0;
}