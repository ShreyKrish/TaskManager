cmake_minimum_required(VERSION 3.10)

# Set the project name
project(TaskManager)

# Find the Qt library
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add include directories
include_directories(include)

# Add the executable
add_executable(TaskManager src/main.cpp src/Task.cpp src/TaskManager.cpp src/utils.cpp)

# Link Qt libraries
target_link_libraries(TaskManager Qt5::Widgets)

# Add test executables
add_executable(TestUtils tests/test_utils.cpp src/utils.cpp)
add_executable(TestTask tests/test_Task.cpp src/Task.cpp src/utils.cpp)
add_executable(TestTaskManager tests/test_TaskManager.cpp src/TaskManager.cpp src/Task.cpp src/utils.cpp)
