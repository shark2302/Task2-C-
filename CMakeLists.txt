cmake_minimum_required(VERSION 3.17)
project(Task2_C_)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task2_C_ main.cpp Components/Window.cpp Components/Window.h Components/WindowComponent.cpp Components/WindowComponent.h Components/Label.cpp Components/Label.h Components/Button.cpp Components/Button.h Components/ListView.cpp Components/ListView.h Utils.h Components/Panel.cpp Components/Panel.h Components/Line.cpp Components/Line.h UI/Controller.cpp UI/Controller.h UI/WindowComponentData.cpp UI/WindowComponentData.h Utils.cpp)