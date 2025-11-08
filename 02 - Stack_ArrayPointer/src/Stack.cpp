#include "Stack.h"
#include <iostream>
using namespace std;

// Constructor: initializes stack with given length
Stack::Stack(int length) : length(length)
{
    myStack = new int[length];  // dynamically allocate array
    nextPtr = myStack;          // points to the first free position
}

// Check if stack is empty
bool Stack::isEmpty()
{
    return nextPtr == myStack;
}

// Check if stack is full
bool Stack::isFull()
{
    return nextPtr == myStack + length;
}

// Push new item on top of stack
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

// Pop item from top of stack
void Stack::pop()
{
    if (!isEmpty())
        nextPtr--;  // just move pointer back (no need to delete)
    else
        cout << "Stack is empty!\n";
}

// Return number of items in stack
int Stack::size()
{
    return nextPtr - myStack;
}

// Return top item without removing it
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

// Clear stack (remove all items)
void Stack::clear()
{
    nextPtr = myStack;
}

// Destructor: free allocated memory
Stack::~Stack()
{
    delete[] myStack;
}
