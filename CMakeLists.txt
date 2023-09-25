cmake_minimum_required(VERSION 3.26)
project(TestStatic)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestStatic src/main.cpp)

target_link_directories(TestStatic PRIVATE ${CMAKE_SOURCE_DIR}/libs)
target_include_directories(TestStatic PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(TestStatic PRIVATE TestLib)