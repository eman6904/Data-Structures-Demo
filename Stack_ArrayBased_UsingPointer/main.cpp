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
    myStack.push(10);
    myStack.push(4);
    myStack.push(5);

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

    //============ Clear stack ==================
     myStack.clear();

    //============= Another way to display items , but this way clear stack ========
    myStack.push(2);
    myStack.push(3);
    myStack.push(10);
    while(!myStack.isEmpty()){
        cout<<myStack.top()<<" ";
        myStack.pop();
    }



    return 0;
}
