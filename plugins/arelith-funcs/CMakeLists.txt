set(CMAKE_CXX_FLAGS "-m32 -mno-accumulate-outgoing-args -Wall -Wno-unused -Wno-return-type -Wno-write-strings -Werror -std=c++14 -fno-omit-frame-pointer -fno-rtti")
set(CMAKE_CXX_FLAGS_DEBUG "-DDEBUG -Og -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-DRELEASE -DNDEBUG -O2 -s")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-DRELWITHDEBINFO -DNDEBUG -O2")

add_module(
    arelith_funcs

    # Top level
	plugin-arelith_funcs
    NWNXArelithFuncs)

target_include_directories(
    arelith_funcs
    PRIVATE ".")