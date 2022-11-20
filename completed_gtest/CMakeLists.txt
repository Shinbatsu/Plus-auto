cmake_minimum_required(VERSION 3.12) # version can be different

project(t) #name of your project

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
    "googletest"
    
    ) # add googletest subdirectory
# Main Target
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytests mytests.cpp) # add this executable

target_link_libraries(mytests PRIVATE     gtest
gtest_main) # link google test to this executable
