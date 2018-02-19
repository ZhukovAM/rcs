cmake_minimum_required(VERSION 3.8)
project(test_robot_control_system)

set(CMAKE_CXX_STANDARD 11)

include_directories(${RCS_INCLUDE_DIR})

set(SOURCE_FILES
        main.cpp
        )

add_executable(test_rcs ${SOURCE_FILES})

target_link_libraries(test_rcs rcslib)