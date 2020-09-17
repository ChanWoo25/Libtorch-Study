cmake_minimum_required(VERSION 3.12...3.18)

project(
libtorch   
VERSION         20.09
LANGUAGES       CXX
DESCRIPTION     "C++ Implementation of Superpoint."
)

set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)

### LIBTORCH
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "/usr/local/libtorch" "/usr/local/zed")
find_package(Torch REQUIRED QUIET)
include_directories(${TORCH_INCLUDE_DIRS})
###

add_executable(main main.cpp)
target_link_libraries(main PUBLIC 
${TORCH_LIBRARIES}
)
