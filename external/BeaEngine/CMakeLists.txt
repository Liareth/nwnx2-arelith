add_library(BeaEngine STATIC src/BeaEngine.c)
target_include_directories(BeaEngine PUBLIC "include" PRIVATE "src")