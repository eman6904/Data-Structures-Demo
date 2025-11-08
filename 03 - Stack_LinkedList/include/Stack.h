#ifndef STACK_H
#define STACK_H

// Simple stack implemented using a linked list
class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* head;
public:

    Stack();

    bool isEmpty();

    bool isNotEmpty();

    void push(int newValue);

    void pop();

    int top();

    int size();

    ~Stack();
};

#endif // STACK_H
