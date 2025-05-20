cmake_minimum_required(VERSION 3.16)
project(manejo_archivos)
file(GLOB SRC_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)
add_executable(manejo_archivos ${SRC_FILES})
target_include_directories(manejo_archivos
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
