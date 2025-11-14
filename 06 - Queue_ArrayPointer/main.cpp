#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    int len;
    cout << "Enter queue length: ";
    cin >> len;

    Queue myQueue(len);

    // ======== Push items ========
    myQueue.enqueue(5);
    myQueue.enqueue(10);
    myQueue.enqueue(15);
    myQueue.enqueue(20);

    // ======== Show front item ========
    cout << "Front element: " << myQueue.front() << endl;

    // ======== Pop one item ========
    myQueue.dequeue();
    cout << "After one pop, front element: " << myQueue.front() << endl;

    // ======== Check if full ========
    cout << (myQueue.isFull() ? "Queue is full\n" : "Queue is not full\n");

    // ======== Check current size ========
    cout << "Current size: " << myQueue.size() << endl;

    // ======== Display and empty all items ========
    cout << "Items in queue (from front to back): ";
    while (!myQueue.isEmpty())
    {
        cout << myQueue.front() << " ";
        myQueue.dequeue();
    }
    cout << endl;

    // ======== Check if empty ========
    cout << (myQueue.isEmpty() ? "Queue is empty\n" : "Queue is not empty\n");

    return 0;
}
