cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(terminalChess)

# Add the subdirectories
add_subdirectory(board)
add_subdirectory(chess)
