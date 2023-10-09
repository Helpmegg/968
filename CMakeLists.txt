cmake_minimum_required(VERSION 3.2)
project(CodeCounter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB files
     "*.hpp"
     "*.cpp"
)

add_executable(CodeCounter ${files})
