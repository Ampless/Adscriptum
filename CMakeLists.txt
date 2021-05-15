cmake_minimum_required(VERSION 3.17.0)

project(adscriptum VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(adscriptum
    test.cc
)

target_link_libraries(adscriptum PRIVATE Qt6::Widgets)
