#ifndef __RELAR_UTIL_HPP__
#define __RELAR_UTIL_HPP__

#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdint.h>

namespace relar{
    pid_t GetThreadId();
    uint32_t GetFiberId();
}


#endif