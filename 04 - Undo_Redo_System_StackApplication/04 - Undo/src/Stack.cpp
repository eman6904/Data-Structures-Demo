#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
    head = nullptr;
}

bool Stack::isEmpty()
{

    return head == nullptr;
}

bool Stack::isNotEmpty()
{
    return head != nullptr;
}

void Stack::push(string newValue)
{

    Node* newNode = new Node();
    newNode->data = newValue;

    newNode->next = head;
    head = newNode;
}

void Stack::pop()
{

    if (head == nullptr)
    {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

string Stack::top()
{
    if (head == nullptr)
    {
        return "";
    }
    return head->data;
}

int Stack::size()
{
    Node* node = head;
    int count = 0;

    while (node != nullptr)
    {
        count++;
        node = node->next;
    }
    return count;
}

Stack::~Stack()
{
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
