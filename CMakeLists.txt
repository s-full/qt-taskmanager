cmake_minimum_required(VERSION 3.16)

project(qt-taskmanager)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

# include directory, for headers
include_directories(include)

# for ui files
set(UI_FILES ui/mainwindow.ui)

qt5_wrap_ui(UI_HEADERS ${UI_FILES})

set(MOC_SOURCES ${MOC_SOURCES} ${UI_HEADERS})
qt5_wrap_cpp(MOC_SOURCES include/mainwindow.h src/mainwindow.cpp ${UI_HEADERS})

include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
add_executable(main src/main.cpp src/mainwindow.cpp src/task.cpp ${MOC_SOURCES}) 

target_link_libraries(main Qt5::Widgets)

