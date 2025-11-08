#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include"Task.h"
#include<vector>

class Node
{
public:
    Task task;
    Node* next;
    Node* prev;
    Node(const Task& t) : task(t){}
};

class LinkedList
{
private:
    Node* head;
    Node* tail;
public:

    LinkedList();

    bool isEmpty();

    void insert(Task& task);

    void remove(Task& task);

    Node* getTask(Task& task);

    vector<Task> display(TaskStatus status);

    virtual ~LinkedList();

};

#endif // LINKEDLIST_H
