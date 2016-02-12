#pragma once

/**
 * This is a very basic profiling framework. By default, it is DISABLED
 * and is optimised away by the compiler.
 *
 * To enable it, you need to pass -DPROFILE to cmake.
 *
 * Currently, only influxdb is supported as a target, and that requires having
 * nwnx_influxdb loaded, since this profiler speaks to it over pluginlink!
 *
 * You will also want to run nwnx_perf, which adds many more sampling points
 * for you to peruse.
 */

#define HAVE_PROFILE

#include "Profile_BoxedType.h"
#include "Profile_Event.h"

#include <chrono>

namespace Profile
{

// Executes the code given in `code`, times it and returns the runtime
// (in nanoseconds).
template<typename Lambda>
inline uint64_t measure(Lambda code)
{
    const auto start = std::chrono::steady_clock::now();
    code();
    const auto end = std::chrono::steady_clock::now();

    const auto diff = std::chrono::
                      duration_cast<std::chrono::nanoseconds>(end - start).count();

    // assert(diff >= 0);

    return diff;
}

// A very simple hardlimiter that will return true if the limit still applies.
bool limit(const std::string& measurement,
           const std::chrono::steady_clock::duration sample_rate);

};

namespace Profile
{

// Push a new datapoint to the profiler. Currently, only works with
// influxdb.
void push(
    const std::string& measurement,
    // Tags are "context"; for example, if profiling a script,
    // a tag named "script" would contain the script to execute.
    // Think of this as a "group by" in sql lingo.
    const std::map<std::string, std::string>& tags,
    // Fields, however, are always data points; those you wish to
    // see in a graph afterwards.
    // Think of these as what goes into avg(), mean(), sum(), etc.
    // BoxedType is a helper so you can input arbitary numbers and not
    // lose precision or type info.
    // Strings arent currenlty supported as types.
    const std::map<std::string, BoxedType>& fields,
    // Never send samples faster than this far apart in time.
    // This is a HARD limiter. Samples arriving faster than this rate
    // will simply be discarded.
    // See Profile::limit for runtime characteristics.
    const std::chrono::high_resolution_clock::duration sample_rate =
        std::chrono::nanoseconds(0)
);

};
