

cmake_minimum_required(VERSION 2.8)

project(demo3)

add_subdirectory(math)

aux_source_directory(. SRC_DIR)

add_executable(demo3 main.c)

target_link_libraries(demo3 MathFunctions)