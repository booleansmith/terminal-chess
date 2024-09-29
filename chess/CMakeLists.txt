cmake_minimum_required(VERSION 3.10)

project(terminalChess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(terminalChess main.cpp)

add_subdirectory(../board ${CMAKE_BINARY_DIR}/board_library)
add_subdirectory(../piece ${CMAKE_BINARY_DIR}/piece_library)

target_link_libraries(terminalChess board_library)
target_link_libraries(terminalChess piece_library)