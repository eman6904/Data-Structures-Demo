#include "LinkedList.h"
#include<iostream>
#include<vector>
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

bool LinkedList::isEmpty()
{
    return head == NULL;
}

void LinkedList::insert(Task& task)
{
    Node* newNode = new Node(task);
    newNode->task = task;

    if(isEmpty())
    {
        head = newNode;
        newNode->prev = head;
        newNode->next = head;
        tail = head;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    head->prev = tail;
    tail->next = head;
}

void LinkedList::remove(Task& task)
{
    Node* current = getTask(task);

    if(tail == head)
    {
        head = NULL;
        tail = NULL;
        delete current;
        return;
    }
    else if(current == head)
    {
        head = current->next;
        current->next->prev = current->prev;
        current->prev->next = current->next;

        delete current;

    }
    else if(current == tail)
    {
        current->next->prev = current->prev;
        current->prev->next = current->next;
        tail = current->prev;
        delete current;
    }
    else
    {
        current->next->prev = current->prev;
        current->prev->next = current->next;

        delete current;
    }

}
vector<Task> LinkedList::display(TaskStatus status)
{
    vector<Task> tasks;

    if(isEmpty())
    {
        cout << "There is no tasks yet!\n";
        return tasks;
    }

    Node* current = head;
    do
    {
        if(current->task.getTaskCase() == status||status == TaskStatus::ALL)
            tasks.push_back(current->task);
        current = current->next;
    }
    while(current!=head);

    return tasks;
}
Node* LinkedList::getTask(Task& task)
{

    Node* current = head;
    do
    {
        if(current->task.getId() == task.getId())
            return current;
        current = current->next;
    }
    while(current!=head);

    return NULL;
}
LinkedList::~LinkedList()
{
    if(!isEmpty())
    {
        Node* current = head;
        do
        {
            Node* node = current;
            current = current->next;
            delete node;
        }
        while(current != head);
    }
}
