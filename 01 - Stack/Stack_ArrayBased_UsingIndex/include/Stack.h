#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int next;            // index of next free position (also represents stack size)
    static const int length = 100;  // max stack size
    int myStack[length]; // fixed-size array for stack elements

public:
    Stack();             // constructor

    bool isFull();       // check if stack is full
    bool isEmpty();      // check if stack is empty

    void push(int item); // add element
    void pop();          // remove top element
    int top();           // get top element
    int size();          // get current size
    void clear();        // empty the stack

    virtual ~Stack();    // destructor
};

#endif // STACK_H
