cmake_minimum_required(VERSION 3.2)
project(robot_control_system)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        MotionControlSystem.cpp
        MotionControlSystem.h
        StateMachine.cpp
        StateMachine.h
        SystemState.cpp
        SystemState.h
        RobotControlSystem.cpp RobotControlSystem.h Manager.cpp Manager.h Operation.cpp Operation.h)

add_library(rcslib ${SOURCE_FILES})
