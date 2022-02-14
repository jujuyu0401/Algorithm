project(algorithm)
cmake_minimum_required( VERSION 3.5 )
set(CMAKE_BUILD_TYPE "Debug")
#set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "-fsanitize=undefined,address,leak -fno-omit-frame-pointer")
set(CMAKE_C_FLAGS "-fsanitize=undefined,address,leak -fno-omit-frame-pointer")
set(CMAKE_Ｌ_FLAGS "-fsanitize=undefined,address,leak -fno-omit-frame-pointer")

INCLUDE_DIRECTORIES(${SOURCE_DIR}/src)

#search
include_directories(${PROJECT_SOURCE_DIR}/src/search)
add_subdirectory(src/search)
set(EXTRA_LIBS ${EXTRA_LIBS} all_search)

#sort
include_directories(${PROJECT_SOURCE_DIR}/src/sort)
add_subdirectory(src/sort)
set(EXTRA_LIBS ${EXTRA_LIBS} all_sort)


#find_package(OpenCV 4 REQUIRED)
#include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(algorithm main.cpp)
target_link_libraries(algorithm PRIVATE ${EXTRA_LIBS})

#target_link_libraries(sort PRIVATE ${OpenCV_LIBS} ${EXTRA_LIBS})

