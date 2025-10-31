#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int length) : length(length)
{
    myStack = new int[length];
    nextPtr = myStack;
}

bool Stack::isEmpty()
{
    return nextPtr == myStack;
}

bool Stack::isFull()
{
    return nextPtr == myStack + length;
}

void Stack::push(int item)
{
    if (isFull())
        cout << "Stack is full!\n";
    else
    {
        *nextPtr = item;
        nextPtr++;
    }
}

void Stack::pop()
{
    if (!isEmpty())
        nextPtr--;
    else
        cout << "Stack is empty!\n";
}

int Stack::getItemsNumber()
{
    return nextPtr - myStack;
}

int Stack::top()
{
    if (!isEmpty())
    {
        auto currPtr = nextPtr;
        currPtr--;
        return *currPtr;
    }
    else
    {
        cout << "Stack is empty!\n";
        return -1;
    }
}

void Stack::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty!\n";
        return;
    }

    auto currPtr = nextPtr;
    cout << "Stack elements: ";
    while (currPtr != myStack)
    {
        currPtr--;
        cout << *currPtr << " ";
    }
    cout << endl;
}

void Stack::clear()
{
    nextPtr = myStack;
}

Stack::~Stack()
{
    delete[] myStack;
}
