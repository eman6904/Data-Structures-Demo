#include <iostream>
#include"stack.h"
using namespace std;

int main()
{
    Stack myStack;
    // Add some elements
    myStack.push(7);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    cout << "Stack size is: " << myStack.size() << "\n";

    // Display and remove elements
    while (myStack.isNotEmpty())
    {
        cout << myStack.top() << "\n";
        myStack.pop();
    }
    return 0;
}
