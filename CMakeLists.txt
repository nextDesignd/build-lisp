cmake_minimum_required(VERSION 3.12)

project(prompt)

add_compile_options(-Wall)

add_executable(prompt prompt.c)

target_link_libraries(prompt edit)

