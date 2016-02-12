#ifndef NWNX_ARELITH_MONITORING_MAINLOOPTICKS_HPP_
#define NWNX_ARELITH_MONITORING_MAINLOOPTICKS_HPP_

#include <cstdint>

namespace Metrics
{
    namespace MainLoopTicks
    {
        void StartCollecting();
        void StopCollecting();
        int MainLoopAfter(uintptr_t);
    }
}

#endif // NWNX_ARELITH_MONITORING_MAINLOOPTICKS_HPP_