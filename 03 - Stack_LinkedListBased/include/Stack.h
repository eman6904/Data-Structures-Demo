#ifndef STACK_H
#define STACK_H

// Simple stack implemented using a linked list
class Node {
public:
    int data;
    Node* next;
};

class Stack {
public:
    Node* head;

    Stack();            // constructor
    bool isEmpty();     // check if empty
    bool isNotEmpty();  // check if not empty
    void push(int newValue); // add element on top
    void pop();              // remove element from top
    int top();               // get top element (returns -1 if empty)
    int size();              // count number of elements
    ~Stack();                // destructor
};

#endif // STACK_H
