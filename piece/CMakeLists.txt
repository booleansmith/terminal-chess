cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(piece_library STATIC src/piece.cpp)

target_include_directories(piece_library PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)