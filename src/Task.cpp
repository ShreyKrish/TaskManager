// src/Task.cpp
#include "Task.h"
#include "utils.h"
#include <iostream>
#include <stdexcept>

Task::Task(const std::string &title, const std::string &description, const std::string &dueDate, const std::string &priority)
    : title(trim(title)), description(trim(description)), dueDate(dueDate), priority(priority) {
    if (!isValidDate(dueDate)) {
        throw std::invalid_argument("Invalid date format or value");
    }
    if (!isValidPriority(priority)) {
        throw std::invalid_argument("Invalid priority value");
    }
}

std::string Task::getTitle() const {
    return title;
}

std::string Task::getDescription() const {
    return description;
}

std::string Task::getDueDate() const {
    return dueDate;
}

std::string Task::getPriority() const {
    return priority;
}

void Task::printTask() const {
    std::cout << "Title: " << title << "\n"
              << "Description: " << description << "\n"
              << "Due Date: " << dueDate << "\n"
              << "Priority: " << priority << "\n";
}
