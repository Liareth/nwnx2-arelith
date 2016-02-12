set(CMAKE_CXX_FLAGS "-m32 -mno-accumulate-outgoing-args -Wall -Wno-unused -Wno-return-type -Wno-write-strings -Werror -std=c++14 -fno-omit-frame-pointer -fno-rtti")
set(CMAKE_CXX_FLAGS_DEBUG "-DDEBUG -Og -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-DRELEASE -DNDEBUG -O2 -s")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-DRELWITHDEBINFO -DNDEBUG -O2")

find_package(MySQL REQUIRED)

add_module(
    arelith_monitoring

    # Top level	
    plugin-arelith_monitoring
    NWNXArelithMonitoring
    ServerConfig

    # Metrics
    metrics/mainloopticks/MainLoopTicks
    )
    
target_include_directories(
    arelith_monitoring 

    PRIVATE "."
    PRIVATE "../../lib-arelith"
    PRIVATE ${MYSQL_INCLUDE_DIR})

target_link_libraries(arelith_monitoring ${MYSQL_LIBRARY})