cmake_minimum_required(VERSION 3.20)
set (CMAKE_CXX_STANDARD 26)
project(SiphonYT)

add_executable(siphonyt main.cpp arguments.cpp)

set (mainDir "C:\\Programming\\Languages\\C++\\SiphonYT")

set_target_properties(siphonyt PROPERTIES
        OUTPUT_NAME "siphonyt"
        RUNTIME_OUTPUT_DIRECTORY ${mainDir}
)