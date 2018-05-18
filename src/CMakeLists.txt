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
        RobotControlSystem.cpp RobotControlSystem.h OperationManager.cpp OperationManager.h Operation.cpp Operation.h ModulesFactory.cpp ModulesFactory.h Actuator.cpp Actuator.h IOSystem.cpp IOSystem.h Observer.cpp Observer.h SafetySystem.cpp SafetySystem.h)

add_library(rcslib ${SOURCE_FILES})
