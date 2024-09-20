cmake_minimum_required(VERSION 3.10)

project(terminalChess)

add_executable(terminalChess main.cpp)

add_subdirectory(../board ${CMAKE_BINARY_DIR}/library_build)

target_link_libraries(terminalChess boardlibrary)