#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    int len;
    cout << "Enter stack length: ";
    cin >> len;

    Stack myStack(len);

    // ======== Push items ========
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.push(20);

    // ======== Top element ========
    cout << "Top element: " << myStack.top() << endl;

    // ======== Pop one item ========
    myStack.pop();

    // ======== Check if full ========
    cout << (myStack.isFull() ? "Stack is full\n" : "Stack is not full\n");

    // ======== Check size ========
    cout << "Current size: " << myStack.size() << endl;

    // ======== Display all items (from top to bottom) ========
    cout << "Items in stack (from top to bottom): ";
    while (!myStack.isEmpty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    // ======== Check if empty ========
    cout << (myStack.isEmpty() ? "Stack is empty\n" : "Stack is not empty\n");

    return 0;
}
