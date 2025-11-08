#include <iostream>
#include "LinkedList.h"
#include "Task.h"
using namespace std;

vector<Task> displayTasks(LinkedList& list)
{
    vector<Task>tasks;
    int command;
    cout<<"Which tasks do you want:\n";
    cout<<"1 - Done tasks\n";
    cout<<"2 - Progress tasks\n";
    cout<<"3 - To Do tasks\n";
    cout<<"4 - All\n";
    cout<<"Enter number of status: ";

    cin>>command;
    switch(command)
    {
    case 1:
        tasks = list.display(TaskStatus::DONE);
        break;
    case 2:
        tasks = list.display(TaskStatus::PROGRESS);
        break;
    case 3:
        tasks = list.display(TaskStatus::TODO);
        break;
    case 4:
        tasks = list.display(TaskStatus::ALL);
        break;
    default:
        cout<<"Invalid command.\n";
    }
    int counter = 1;
    for(int t = tasks.size()-1; t >= 0; t--)
        tasks[t].display(counter),counter++;
    return tasks;
}

int main()
{
    int command;
    LinkedList list;
    while(true)
    {
        cout<<"1 - Add new task\n2 - Update Task\n3 - Remove Task\n4 - Display\n";
        cout<<"============================================================================\n";
        cout<<"Enter your commend: ";
        cin>>command;
        switch(command)
        {
        case 1:
        {
            string title,desc;
            cout<<"Enter task title: ";
            cin.ignore();
            getline(cin,title);

            cout<<"Enter task description: ";
            getline(cin,desc);

            Task newTask(title,desc,TaskStatus::TODO);
            list.insert(newTask);
            cout<<"Task  added successfully.\n";
            cout<<"============================================================================\n";
            break;
        }
        case 2:
        {
            int taskNumber;
            vector<Task>tasks = displayTasks(list);
            if(tasks.size() == 0)
                cout<<"these tasks not found.\n";
            else
            {
                cout<<"Enter number of task that you want to update: ";
                cin>>command;
                Node* node = NULL;
                if(command>=1&&command<=tasks.size())
                {
                    taskNumber = tasks.size()-command;
                    node = list.getTask(tasks[taskNumber]);
                    cout<<"What do you want to update:\n1 - Title\n2 - Description\n3 - Status\n";
                    cout<<"Enter command number: ";
                    cin>>command;
                    switch(command)
                    {
                    case 1:
                    {
                        string title;
                        cout<<"Enter new title: ";
                        cin.ignore();
                        getline(cin,title);
                        node->task.setTaskTitle(title);
                        cout<<"Title updated successfully.\n";
                        break;
                    }
                    case 2:
                    {
                        string desc;
                        cout<<"Enter new description: ";
                        cin.ignore();
                        getline(cin,desc);
                        node->task.setTaskDescription(desc);
                        cout<<"description updated successfully.\n";
                        break;
                    }
                    case 3:
                    {
                        cout<<"Which status do you want to set:\n1 - DONE\n2 - PROGRESS\n3 - TODO\n";
                        cout<<"Enter number of status: ";
                        cin>>command;
                        switch(command)
                        {
                        case 1:
                            node->task.setTaskStatus(TaskStatus::DONE);
                            cout<<"Status updated successfully.\n";
                            break;
                        case 2:
                            node->task.setTaskStatus(TaskStatus::PROGRESS);
                            cout<<"Status updated successfully.\n";
                            break;
                        case 3:
                            node->task.setTaskStatus(TaskStatus::TODO);
                            cout<<"Status updated successfully.\n";
                            break;
                        default:
                            cout<<"Invalid command.\n";
                        }
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid command.\n";
                    }

                    }
                }
                else
                {
                    cout<<"Invalid command.\n";
                }

            }
            cout<<"============================================================================\n";
            break;
        }
        case 3:
        {
            int taskNumber;
            vector<Task>tasks = displayTasks(list);
            if(tasks.size() == 0)
                cout<<"these tasks not found or list is empty.\n";
            else
            {
                cout<<"Enter number of task that you want to remove: ";
                cin>>command;
                if(command>=1&&command<=tasks.size())
                {
                    taskNumber = tasks.size()-command;
                    list.remove(tasks[taskNumber]);
                    cout<<"Task removed successfully.\n";
                }
                else
                {
                    cout<<"Invalid command.\n";
                }
            }
            cout<<"============================================================================\n";
            break;
        }
        case 4:
        {
            displayTasks(list);
            cout<<"============================================================================\n";
            break;
        }
        default:
        {
            cout<<"Invalid command.\n";
        }
        }
    }

    return 0;
}
