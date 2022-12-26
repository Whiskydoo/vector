cmake_minimum_required(VERSION 3.0.0)
project(Vector_Project VERSION 1.0.0)

add_subdirectory(my_vector)


add_executable(vector main.cpp)

target_link_libraries(vector my_vector)