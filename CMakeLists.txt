cmake_minimum_required(VERSION 3.6)
project(IntArrayStack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCE_FILES
    catch.hpp
    IntArrayStack.cpp
    IntArrayStack.h
    Flags.h
    tests.cpp)

add_executable(IntArrayStack ${SOURCE_FILES})
target_link_libraries(IntArrayStack ${CMAKE_SOURCE_DIR}/libIntArrayStack.a)
set_target_properties(IntArrayStack PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR} )
