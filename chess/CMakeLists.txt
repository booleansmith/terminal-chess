cmake_minimum_required(VERSION 3.10)

project(terminalChess)

add_executable(terminalChess main.cpp)

# Link the board library to the terminalChess executable
target_link_libraries(terminalChess PUBLIC boardlibrary)
