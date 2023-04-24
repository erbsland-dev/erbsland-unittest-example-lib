cmake_minimum_required(VERSION 3.20)

project(erbsland-unittest-example-lib)
add_library(erbsland-unittest-example-lib STATIC
        src/ExampleLib.hpp
        src/ExampleLib.cpp)
target_compile_features(erbsland-unittest-example-lib PRIVATE cxx_std_17)
target_include_directories(erbsland-unittest-example-lib INTERFACE "${CMAKE_CURRENT_LIST_DIR}/src")
