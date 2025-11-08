#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    head = nullptr;
}

void Queue::insertFirst(pair<string,string> newValue)
{
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    head = newNode;
}

bool Queue::isEmpty()
{
    return head == nullptr;
}

bool Queue::isNotEmpty()
{
    return head != nullptr;
}

void Queue::push(pair<string,string> newValue)
{
    if (isEmpty())
    {
        insertFirst(newValue);
        return;
    }

    Node* lastNode = head;
    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }

    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    lastNode->next = newNode;
}

void Queue::pop()
{
    if (head == nullptr)
    {
        cout << "there is no calls\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

pair<string,string> Queue::front()
{
    if (head == nullptr)
    {
        cout << "There is no calls\n";
    }
    return head->data;
}

int Queue::size()
{
    Node* node = head;
    int count = 0;
    while (node != nullptr)
    {
        ++count;
        node = node->next;
    }
    return count;
}

Queue::~Queue()
{
    while (head != nullptr)
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}
