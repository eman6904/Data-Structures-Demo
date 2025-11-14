#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q;
    cout << "Added elements: 10, 20, 30, 40\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Front element: " << q.front() << endl;

    cout << "pop two elements...\n";
    q.dequeue();
    q.dequeue();

    cout << "Front element now: " << q.front() << endl;

    cout << "Add more elements: 50, 60\n";
    q.enqueue(50);
    q.enqueue(60);

    if (q.isFull())
        cout << "Queue is full now!\n";
    else
        cout << "Queue still has space.\n";

    cout << "Elements in queue: ";
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.dequeue();
    }
    cout << endl;

    return 0;
}
