// tests/test_Task.cpp
#include "Task.h"
#include <cassert>
#include <iostream>

void testTaskCreation() {
    Task task("Task 1", "Description for task 1", "2024-05-25", "High");
    assert(task.getTitle() == "Task 1");
    assert(task.getDescription() == "Description for task 1");
    assert(task.getDueDate() == "2024-05-25");
    assert(task.getPriority() == "High");
}

void testInvalidDate() {
    try {
        Task task("Task 2", "Description for task 2", "2024-13-25", "Medium");
    } catch (const std::invalid_argument &e) {
        assert(std::string(e.what()) == "Invalid date format or value");
    }
}

void testInvalidPriority() {
    try {
        Task task("Task 3", "Description for task 3", "2024-05-25", "Urgent");
    } catch (const std::invalid_argument &e) {
        assert(std::string(e.what()) == "Invalid priority value");
    }
}

int main() {
    testTaskCreation();
    testInvalidDate();
    testInvalidPriority();
    std::cout << "All Task tests passed.\n";
    return 0;
}
