cmake_minimum_required(VERSION 3.10)

project(boardlibrary)

add_library(boardlibrary STATIC src/board.cpp)

target_include_directories(boardlibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)