cmake_minimum_required(VERSION 3.10)
project(ftxclient)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wfatal-errors -Wpedantic -Wextra -Wmissing-include-dirs -pthread -g")
add_compile_options(-Wall -Werror -Wfatal-errors -Wpedantic -Wextra -Wmissing-include-dirs -pthread)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -march=native -g")

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_STATIC_RUNTIME OFF)
set(Boost_USE_MULTITHREADED OFF)
set(Boost_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/boost/include)
find_package(Boost 1.69.0 REQUIRED)
link_directories(${Boost_LIBRARY_DIRS})
include_directories(SYSTEM ${Boost_INCLUDE_DIR})

include_directories(src)
include_directories(${PROJECT_SOURCE_DIR}/websocketpp)
include_directories(SYSTEM src/external)

add_subdirectory(src/rest)
add_subdirectory(src/ws)
add_subdirectory(src/util)
add_subdirectory(src/example)
