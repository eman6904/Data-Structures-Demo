#include "Stack.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes an empty stack (next points to 0)
Stack::Stack() : next(0)
{
}

//================== Check if Empty ==================
// Returns true if the stack has no elements
bool Stack::isEmpty()
{
    return next == 0;
}

//================== Check if Full ==================
// Returns true if the stack reached its maximum capacity
bool Stack::isFull()
{
    return next == length;
}

//================== Push ==================
// Adds a new item to the top of the stack
void Stack::push(int item)
{
    if (!isFull())
        myStack[next] = item, next++;
    else
        cout << "Stack is full!\n";
}

//================== Pop ==================
// Removes the top item from the stack
void Stack::pop()
{
    if (!isEmpty())
        next--;
    else
        cout << "Stack is empty!\n";
}

//================== Size ==================
// Returns the current number of elements in the stack
int Stack::size()
{
    return next;
}

//================== Top ==================
// Returns the top item without removing it
int Stack::top()
{
    if (!isEmpty())
        return myStack[next - 1];
    else
    {
        cout << "Stack is empty!\n";
        return -1;
    }
}

//================== Clear ==================
// Removes all elements from the stack
void Stack::clear()
{
    next = 0;
}

//================== Destructor ==================
// Destructor (not used because we don’t allocate dynamic memory)
Stack::~Stack()
{
    // dtor
}
