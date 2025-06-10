cmake_minimum_required(VERSION 3.16)
project(parcialmateo)
file(GLOB SRC_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)
add_executable(ejemplo1 ${SRC_FILES})
target_include_directories(parcialmateo
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
