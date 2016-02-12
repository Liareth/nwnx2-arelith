#pragma once

#include <string>
#include <map>
#include <chrono>
#include <sys/time.h>

namespace Profile
{

struct QueuedEvent {
    const std::string measurement;
    const std::map<std::string, std::string> tags;
    const std::map<std::string, Profile::BoxedType> fields;

    uint64_t ts;

    // const std::chrono::steady_clock::time_point ts;

    QueuedEvent(
        const std::string m,
        const std::map<std::string, std::string> t,
        const std::map<std::string, Profile::BoxedType> f

    ): measurement(m), tags(t), fields(f)
    {
        struct timeval tp;
        gettimeofday(&tp, NULL);
        ts = (tp.tv_sec * 1000LL) + (tp.tv_usec / 1000LL);
    }
};

};