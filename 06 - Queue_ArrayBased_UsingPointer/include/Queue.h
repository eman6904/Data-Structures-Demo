#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int* last_element;   // Pointer to the position after the last element
    int* first_element;  // Pointer to the first element
    int sz;              // Queue capacity
    int* myQueue;        // Pointer to array of elements

public:
    Queue(int);          // Constructor (takes queue size)

    bool isEmpty();      // Check if queue is empty

    bool isFull();       // Check if queue is full

    void push(int);      // Add item to queue

    int front();         // Get the front item without removing it

    void pop();          // Remove front item

    void clear();        // Reset the queue

    int size();          // Return current number of items

    virtual ~Queue();    // Destructor
};

#endif // QUEUE_H
