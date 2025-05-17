cmake_minimum_required(VERSION 3.16)
project(taller3)
file(GLOB SRC_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)
add_executable(taller3 ${SRC_FILES})
target_include_directories(taller3
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
