

cmake_minimum_required(VERSION 2.8)

project(demo4)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

option(USE_MYMATH
    "Use provided math implementation" ON)


if (USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)


aux_source_directory(. SRC_DIR)

add_executable(demo4 ${SRC_DIR})

target_link_libraries(demo4 ${EXTRA_LIBS})
