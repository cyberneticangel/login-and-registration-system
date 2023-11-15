cmake_minimum_required(VERSION 3.23)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(login_and_registration_system)

add_executable(cpp
        login_and_registration_system/Login.h
        login_and_registration_system/main.cpp
        login_and_registration_system/Register.h
        projects/login_and_registration_system/main.cpp
        projects/tic_tac_toe/main.cpp)
