#include <iostream>
#include"stack.h"
using namespace std;

int main()
{

    Stack myStack;

    //============== Push new items ==============
    myStack.push(2);
    myStack.push(3);
    myStack.push(10);
    myStack.push(4);
    myStack.push(5);

    //============== Pop item ====================
    myStack.pop();

    //============== Top item ====================
    cout << "Top item: " << myStack.top() << endl;

    //============== Check if stack is empty =====
    if (myStack.isEmpty())
        cout << "Stack is empty.\n";
    else
        cout << "Stack is not empty.\n";

    //============== Check if stack is full ======
    if (myStack.isFull())
        cout << "Stack is full.\n";
    else
        cout << "Stack is not full.\n";

    //============== Clear stack =================
    myStack.clear();
    cout << "Stack cleared.\n";

    //============== Push again ==================
    myStack.push(2);
    myStack.push(3);
    myStack.push(10);

    //============== Display all items ============
    cout << "Items in stack (from top to bottom): ";
    while (!myStack.isEmpty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;



    return 0;
}
