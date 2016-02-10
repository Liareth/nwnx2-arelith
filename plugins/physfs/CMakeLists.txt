set(CMAKE_FIND_LIBRARY_SUFFIXES .a ${CMAKE_FIND_LIBRARY_SUFFIXES})
find_package(PhysFS)

if(PHYSFS_FOUND)
   include_directories(${PHYSFS_INCLUDE_DIRS})
   add_module(physfs
        NWNXPhysfs
        plugin-physfs
   )
   target_link_libraries(physfs ${PHYSFS_LIBRARY})
else(PHYSFS_FOUND)
   message(WARNING "Cannot find physfs libraries!")
endif(PHYSFS_FOUND)
