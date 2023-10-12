cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME EmulationRendererLib)

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

set(
    SRC
    src/EmulationRendererLib/core/EmulationRendererLib.cpp
)

include_directories(
    include
    include/EmulationRendererLib
)

add_library(
    ${PROJECT_NAME}
    ${SRC}
)

target_include_directories(
    ${PROJECT_NAME}
    INTERFACE
    include/EmulationRendererLib
)
