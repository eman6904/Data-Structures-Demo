#include "Stack.h"
#include<iostream>
using namespace std;
Stack::Stack(int length):next(0),length(length)
{
    myStack[length];
}

bool Stack::isEmpty()
{

    return next == 0;
}
bool Stack::isFull()
{

    return next == length;
}
void Stack::push(int item)
{

    if(!isFull())
        myStack[next] = item,next++;
    else
        cout<<"stack is full!\n";
}
void Stack::pop()
{

    if(!isEmpty())
        next--;
    else
        cout<<"stack is empty!\n";
}
int Stack::getItemsNumber()
{
    return next;
}
int Stack::top()
{
    if(!isEmpty())
        return myStack[next-1];
    else
        cout<<"stack is empty!\n";
}
void Stack::display()
{
    if(isEmpty()){
        cout<<"stack is empty!\n";
        return;
    }
    int index = 0;
    while(index<next)
    {
        cout<<myStack[index]<<" ";

        index++;
    }
}
Stack::~Stack()
{
    //dtor
}
