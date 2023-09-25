cmake_minimum_required(VERSION 3.26)
project(TestStatic)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestStatic src/main.cpp)

# Move this before find_library
link_directories(${CMAKE_SOURCE_DIR}/libs)

# specify what library to search for
find_library(TestLib NAMES TestLib PATHS ${CMAKE_SOURCE_DIR}/libs REQUIRED)

target_include_directories(TestStatic PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(TestStatic PRIVATE ${TestLib})