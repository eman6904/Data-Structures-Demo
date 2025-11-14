#include "Queue.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes queue with given size
Queue::Queue(int sz) : sz(sz)
{
    myQueue = new int[sz];     // allocate memory for queue
    frontItem = myQueue;   // both pointers start at beginning
    rearItem = myQueue;
}

//================== Check if Empty ==================
bool Queue::isEmpty()
{
    return frontItem == rearItem;
}

//================== Check if Full ==================
bool Queue::isFull()
{
    return rearItem == myQueue + sz;
}

//================== Push ==================
void Queue::enqueue(int item)
{
    if (isFull())
        cout << "Queue is full!\n";
    else
    {
        *rearItem = item;
        rearItem++;
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
    return *frontItem;
}

//================== Size ==================
int Queue::size()
{
    return rearItem - frontItem;
}

//================== Pop ==================
void Queue::dequeue()
{
    if (isEmpty())
        cout << "Queue is empty!\n";
    else
        frontItem++;
}

//================== Clear ==================
void Queue::clear()
{
    frontItem = myQueue;
    rearItem = myQueue;
}

//================== Destructor ==================
Queue::~Queue()
{
    delete[] myQueue;
}
