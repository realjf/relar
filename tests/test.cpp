#include <iostream>
#include "../relar/log.hpp"

int main(int argc, char** argv){
    relar::Logger::ptr logger(new relar::Logger);
    logger->addAppender(relar::LogAppender::ptr(new relar::StdoutLogAppender));

    relar::LogEvent::ptr event(new relar::LogEvent(__FILE__,__LINE__,0, 1, 2, time(0)));

    logger->log(relar::LogLevel::DEBUG, event);
    std::cout << "hello relar log" << std::endl;
    return 0;
}