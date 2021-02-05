cmake_minimum_required(VERSION 3.0.0)
project(euler VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(euler main.cpp)
add_library (functions functions.cpp)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
