#include "Queue.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes an empty queue (both pointers at 0)
Queue::Queue() : rearItem(-1), frontItem(-1)
{
}

//================== Check if Empty ==================
// Returns true if the queue has no elements
bool Queue::isEmpty()
{
    return frontItem == -1;
}

//================== Check if Full ==================
// Returns true if the queue reached its maximum size
bool Queue::isFull()
{
    return (rearItem+1)%sz == frontItem;
}

//================== Push ==================
// Adds a new item to the end of the queue
void Queue::enqueue(int item)
{
    if (isFull())
        cout << "Queue is full!\n";
    else
    {
        if(frontItem==-1)
            frontItem++;
        rearItem++;
        rearItem%=sz;
        myQueue[rearItem] = item;

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
    return myQueue[frontItem];
}

//================== Size ==================
// Returns the number of items currently in the queue
int Queue::size()
{
     if (isEmpty())
        return 0;
    return (sz + rearItem - frontItem + 1) % sz;
}

//================== Pop ==================
// Removes the first item from the queue
void Queue::dequeue()
{
    if (isEmpty())
        cout << "Queue is empty!\n";
    else{
         if(frontItem==rearItem)
           frontItem = -1,rearItem = -1;
    else
        frontItem++,frontItem%=sz;
    }
}

//================== Clear ==================
// Removes all elements and resets the queue
void Queue::clear()
{
    rearItem = -1;
    frontItem = -1;
}

//================== Destructor ==================
// Destructor (not needed since no dynamic memory is used)
Queue::~Queue()
{
    // dtor
}
