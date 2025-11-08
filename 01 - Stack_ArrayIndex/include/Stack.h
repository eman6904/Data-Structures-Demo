#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int next;
    static const int length = 100;
    int myStack[length];

public:
    Stack();

    bool isFull();

    bool isEmpty();

    void push(int item);

    void pop();

    int top();

    int size();

    void clear();

    virtual ~Stack();
};

#endif // STACK_H
