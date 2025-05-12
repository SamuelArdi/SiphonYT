cmake_minimum_required(VERSION 3.20)
set (CMAKE_CXX_STANDARD 26)
project(
        siphonyt
        VERSION 1.0.0
        DESCRIPTION "A YouTube converter using yt-dlp"
        LANGUAGES CXX
)

add_executable(siphonyt main.cpp arguments.cpp)

set(mainDir "C:\\Programming\\Languages\\C++\\SiphonYT")

set_target_properties(siphonyt PROPERTIES
    OUTPUT_NAME "siphonyt"
        RUNTIME_OUTPUT_DIRECTORY ${mainDir}
)