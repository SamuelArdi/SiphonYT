cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 26)
project(
  siphonyt
  VERSION 1.0.2
  DESCRIPTION "A YouTube converter using yt-dlp"
  LANGUAGES CXX)

set(FILES main.cpp arguments.cpp handler.cpp)

add_executable(siphonyt ${FILES})

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  message(STATUS "Building on linux")
  # Don't need to change dir because linux requires a different approach to make
  # an executable
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  message(STATUS "Building on Windows")
  set(mainDir ".\\bin\\windows\\")
endif()

set_target_properties(siphonyt PROPERTIES OUTPUT_NAME "siphonyt"
                                          RUNTIME_OUTPUT_DIRECTORY ${mainDir})
