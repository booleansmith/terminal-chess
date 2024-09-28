cmake_minimum_required(VERSION 3.10)

project(terminalChess)

add_executable(terminalChess main.cpp)

# Set the output directory for the terminalChess binary
set_target_properties(terminalChess PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Link the board library to the terminalChess executable
target_link_libraries(terminalChess PUBLIC boardlibrary)
