cmake_minimum_required(VERSION 3.10)

# Set the project name
project(boardlibrary)

# Set the output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Add the source files
add_library(boardlibrary STATIC src/board.cpp)

# Include the header files as public for other libraries
target_include_directories(boardlibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)