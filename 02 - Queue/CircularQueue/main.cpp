#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q;
    cout << "Added elements: 10, 20, 30, 40\n";
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front element: " << q.front() << endl;

    cout << "pop two elements...\n";
    q.pop();
    q.pop();

    cout << "Front element now: " << q.front() << endl;

    cout << "Add more elements: 50, 60\n";
    q.push(50);
    q.push(60);

    if (q.isFull())
        cout << "Queue is full now!\n";
    else
        cout << "Queue still has space.\n";

    cout << "Elements in queue: ";
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
