#include <iostream>
#include"queue.h"
using namespace std;

int main()
{
    Queue myQueue;
    // push some elements
    myQueue.enqueue(7);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    myQueue.enqueue(5);

    // print and pop until empty
    while (myQueue.isNotEmpty())
    {
        cout << myQueue.front() << "\n";
        myQueue.dequeue();
    }
    return 0;
}
