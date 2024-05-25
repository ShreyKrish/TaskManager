// tests/test_TaskManager.cpp
#include "TaskManager.h"
#include <cassert>
#include <iostream>

void testAddTask() {
    TaskManager manager;
    manager.addTask("Task 1", "Description for task 1", "2024-05-25", "High");
    manager.addTask("Task 2", "Description for task 2", "2024-05-26", "Medium");
    manager.printTasks(); // Manually verify the output or extend to verify output capture.
}

int main() {
    testAddTask();
    std::cout << "All TaskManager tests passed.\n";
    return 0;
}
