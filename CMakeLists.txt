cmake_minimum_required(VERSION 3.17)
project(AVLLAST)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${PROJECT_SOURCE_DIR}/googletest)



add_executable(Test test.cpp)
target_link_libraries(Test gtest)

add_executable(AVLLAST main.cpp)
