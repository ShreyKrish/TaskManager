// include/TaskManager.h
#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"

class TaskManager {
public:
    void addTask(const std::string &title, const std::string &description, const std::string &dueDate, const std::string &priority);
    void printTasks() const;

private:
    std::vector<Task> tasks;
};

#endif /* TASKMANAGER_H */
