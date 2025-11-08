#ifndef TASK_H
#define TASK_H
#include <iostream>
using namespace std;
enum class TaskStatus {
    TODO,
    PROGRESS,
    DONE,
    ALL
};

class Task
{
private:
    int id;
    string title;
    string desc;
    TaskStatus status;
public:
    static int generatedId;
    Task(const string& title, const string& desc, const TaskStatus& status);

    // Getters
    int getId() const;
    string getTaskTitle() const;
    string getTaskBody() const;
    TaskStatus getTaskCase() const;

    // Setters
    void setTaskTitle(const string& title);
    void setTaskDescription(const string& desc);
    void setTaskStatus(const TaskStatus& status);

    void display(int taskNumber);

    virtual ~Task();
};

#endif // TASK_H
