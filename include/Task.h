// include/Task.h
#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    Task(const std::string &title, const std::string &description, const std::string &dueDate, const std::string &priority);
    std::string getTitle() const;
    std::string getDescription() const;
    std::string getDueDate() const;
    std::string getPriority() const;
    void printTask() const;

private:
    std::string title;
    std::string description;
    std::string dueDate;
    std::string priority;
};

#endif /* TASK_H */
