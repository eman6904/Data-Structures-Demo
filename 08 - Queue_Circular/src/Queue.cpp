#include "Queue.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes an empty queue (both pointers at 0)
Queue::Queue() : last_element(-1), first_element(-1)
{
}

//================== Check if Empty ==================
// Returns true if the queue has no elements
bool Queue::isEmpty()
{
    return first_element == -1;
}

//================== Check if Full ==================
// Returns true if the queue reached its maximum size
bool Queue::isFull()
{
    return (last_element+1)%sz == first_element;
}

//================== Push ==================
// Adds a new item to the end of the queue
void Queue::push(int item)
{
    if (isFull())
        cout << "Queue is full!\n";
    else
    {
        if(first_element==-1)
            first_element++;
        last_element++;
        last_element%=sz;
        myQueue[last_element] = item;

    }
}

//================== Front ==================
// Returns the front item without removing it
int Queue::front()
{
    if (isEmpty())
    {
        cout << "Queue is empty!\n";
        return -1;
    }
    return myQueue[first_element];
}

//================== Size ==================
// Returns the number of items currently in the queue
int Queue::size()
{
     if (isEmpty())
        return 0;
    return (sz + last_element - first_element + 1) % sz;
}

//================== Pop ==================
// Removes the first item from the queue
void Queue::pop()
{
    if (isEmpty())
        cout << "Queue is empty!\n";
    else{
         if(first_element==last_element)
           first_element = -1,last_element = -1;
    else
        first_element++,first_element%=sz;
    }
}

//================== Clear ==================
// Removes all elements and resets the queue
void Queue::clear()
{
    last_element = -1;
    first_element = -1;
}

//================== Destructor ==================
// Destructor (not needed since no dynamic memory is used)
Queue::~Queue()
{
    // dtor
}
