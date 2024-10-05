cmake_minimum_required(VERSION 3.10)

# Set the project name
project(board_library)

# Set the output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Add the source files
add_library(board_library STATIC src/board.cpp)

# Include the header files as public for other libraries
target_include_directories(board_library PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../piece/include
)

target_link_libraries(board_library PUBLIC piece_library)