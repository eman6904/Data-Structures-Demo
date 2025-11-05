#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int* nextPtr;   // Pointer to the next available position
    int length;     // Maximum size of the stack
    int* myStack;   // Pointer to the stack array

public:
    Stack(int size);    // Constructor

    bool isFull();      // Check if the stack is full

    bool isEmpty();     // Check if the stack is empty

    void push(int item); // Add an item to the top

    void pop();          // Remove the top item

    int top();           // Get the top item without removing it

    int size();          // Get the number of elements

    void clear();        // Clear all elements

    virtual ~Stack();    // Destructor
};

#endif // STACK_H
