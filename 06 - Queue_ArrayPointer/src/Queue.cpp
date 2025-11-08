#include "Queue.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes queue with given size
Queue::Queue(int sz) : sz(sz)
{
    myQueue = new int[sz];     // allocate memory for queue
    first_element = myQueue;   // both pointers start at beginning
    last_element = myQueue;
}

//================== Check if Empty ==================
bool Queue::isEmpty()
{
    return first_element == last_element;
}

//================== Check if Full ==================
bool Queue::isFull()
{
    return last_element == myQueue + sz;
}

//================== Push ==================
void Queue::push(int item)
{
    if (isFull())
        cout << "Queue is full!\n";
    else
    {
        *last_element = item;
        last_element++;
    }
}

//================== Front ==================
int Queue::front()
{
    if (isEmpty())
    {
        cout << "Queue is empty!\n";
        return -1;
    }
    return *first_element;
}

//================== Size ==================
int Queue::size()
{
    return last_element - first_element;
}

//================== Pop ==================
void Queue::pop()
{
    if (isEmpty())
        cout << "Queue is empty!\n";
    else
        first_element++;
}

//================== Clear ==================
void Queue::clear()
{
    first_element = myQueue;
    last_element = myQueue;
}

//================== Destructor ==================
Queue::~Queue()
{
    delete[] myQueue;
}
