cmake_minimum_required(VERSION 3.5)

project(SimpleGameDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SRC_SOURCES
    "./src/*.cpp"
)

add_executable(SimpleGameDemo ${SRC_SOURCES})

target_link_directories(SimpleGameDemo PRIVATE ./lib)

target_link_libraries(SimpleGameDemo PRIVATE ForradiaEngine)

target_include_directories(SimpleGameDemo
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/external"
)

target_precompile_headers(SimpleGameDemo
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/src/StdAfx.hpp"
)

target_compile_options(SimpleGameDemo PRIVATE
    $<$<CONFIG:Release>:-O3>
    $<$<CONFIG:Release>:-flto=8>
    $<$<CONFIG:Debug>:-O0>
    $<$<CONFIG:Debug>:-g>
)

target_link_options(SimpleGameDemo PRIVATE
    $<$<CONFIG:Release>:-flto=8>
)
