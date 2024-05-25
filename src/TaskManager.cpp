// src/TaskManager.cpp
#include "TaskManager.h"
#include <iostream>

void TaskManager::addTask(const std::string &title, const std::string &description, const std::string &dueDate, const std::string &priority) {
    Task newTask(title, description, dueDate, priority);
    tasks.push_back(newTask);
}

void TaskManager::printTasks() const {
    for (const auto &task : tasks) {
        task.printTask();
        std::cout << "--------------------------\n";
    }
}
