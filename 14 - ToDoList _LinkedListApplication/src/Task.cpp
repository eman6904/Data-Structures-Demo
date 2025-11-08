#include "Task.h"
int Task::generatedId = 0;
Task::Task(const string& title, const string& desc, const TaskStatus& status)
{
    generatedId++;
    this->id = generatedId;
    this->title = title;
    this->desc = desc;
    this->status = status;
}
// Getters
string Task::getTaskTitle() const {
    return title;
}

string Task::getTaskBody() const {
    return desc;
}

TaskStatus Task::getTaskCase() const {
    return status;
}

int Task::getId()const{

    return id;
}
// Setters
void Task::setTaskTitle(const string& title) {
    this->title = title;
}

void Task::setTaskDescription(const string& desc) {
    this->desc = desc;
}

void Task::setTaskStatus(const TaskStatus& status) {

    this->status = status;
}
void Task::display(int taskNumber){

    cout<<taskNumber<<" - Title: "<<title<<"\n    Descr: "<<desc<<"\n    Status: ";
      switch(status) {
            case TaskStatus::TODO: cout << "TODO\n"; break;
            case TaskStatus::PROGRESS: cout << "PROGRESS\n"; break;
            case TaskStatus::DONE: cout << "DONE\n"; break;
        }
    cout<<"----------------------------------------------------------------\n";

}
Task::~Task()
{
    //dtor
}
