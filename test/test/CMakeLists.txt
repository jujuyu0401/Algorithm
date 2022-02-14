cmake_minimum_required(VERSION 3.5)

project(test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -fsanitize=address)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB all_file
    "*.h"
    "*.cpp"
    )

add_executable(tet ${all_file})
