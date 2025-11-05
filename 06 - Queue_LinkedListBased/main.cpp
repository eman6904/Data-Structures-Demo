#include <iostream>
#include"queue.h"
using namespace std;

int main()
{
    Queue myQueue;
    // push some elements
    myQueue.push(7);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);

    // print and pop until empty
    while (myQueue.isNotEmpty())
    {
        cout << myQueue.front() << "\n";
        myQueue.pop();
    }
    return 0;
}
