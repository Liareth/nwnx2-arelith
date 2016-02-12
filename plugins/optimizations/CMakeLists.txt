set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2")

add_module(optimizations
    NWNXOptimizations plugin-optimizations

    Console

    hooks/HrTimer
    hooks/RunScriptCallback
    hooks/TickRate
    hooks/AIActionSit
)
