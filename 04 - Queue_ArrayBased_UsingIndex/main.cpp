#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue myQueue;

    //============== Push new items ==============
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    //============== Display front ===============
    cout << "Front item: " << myQueue.front() << endl;

    //============== Pop item ====================
    myQueue.pop();
    cout << "Front after one pop: " << myQueue.front() << endl;

    //============== Check if queue is empty =====
    if (myQueue.isEmpty())
        cout << "Queue is empty.\n";
    else
        cout << "Queue is not empty.\n";

    //============== Check if queue is full ======
    if (myQueue.isFull())
        cout << "Queue is full.\n";
    else
        cout << "Queue is not full.\n";

    //============== Show current size ===========
    cout << "Queue size: " << myQueue.size() << endl;

    //============== Clear queue =================
    myQueue.clear();
    cout << "Queue cleared.\n";

    //============== Try adding new items again ===
    myQueue.push(100);
    myQueue.push(200);
    myQueue.push(300);

    //============== Display all items ============
    cout << "Items in queue: ";
    while (!myQueue.isEmpty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
