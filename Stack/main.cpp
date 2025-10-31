#include <iostream>
#include"stack.h"
using namespace std;

int main()
{
    int len;
    cout<<"Enter stack length: ";
    cin>>len;
    Stack myStack(len);

    //============== Push new items ===========
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    //============== Pop item =================
    myStack.pop();

    //============= Display items =============
    myStack.display();

    //============= Top item ===================
    myStack.top();

    //============ Check if stack is empty ======
    myStack.isEmpty();

    //============ Check if stack is Full =======
     myStack.isFull();


    return 0;
}
