cmake_minimum_required(VERSION 3.20)
set (CMAKE_CXX_STANDARD 26)
project(
        siphonyt
        VERSION 1.0.1
        DESCRIPTION "A YouTube converter using yt-dlp"
        LANGUAGES CXX
)

set(FILES
        main.cpp
        arguments.cpp
        handler.cpp
)

add_executable(siphonyt ${FILES})

set(mainDir "C:\\Programming\\Languages\\C++\\SiphonYT\\bin")

set_target_properties(siphonyt PROPERTIES
        OUTPUT_NAME "siphonyt"
        RUNTIME_OUTPUT_DIRECTORY ${mainDir}
)