

cmake_minimum_required(VERSION 2.8)

project(demo2)

aux_source_directory(. SRC_DIR)

add_executable(demo2 ${SRC_DIR})