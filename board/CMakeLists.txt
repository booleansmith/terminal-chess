cmake_minimum_required(VERSION 3.10)

add_library(board_library STATIC src/board.cpp)

# add_subdirectory(../piece ${CMAKE_BINARY_DIR}/piece_library)
# target_link_libraries(boardLibrary PRIVATE pieceLibrary)

target_include_directories(board_library PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(board_library PRIVATE piece_library)