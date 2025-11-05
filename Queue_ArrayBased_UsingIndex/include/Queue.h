#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int last_element;          // Index of the next free position
    int first_element;         // Index of the current front element
    static const int sz = 100; // Maximum queue capacity
    int myQueue[sz];           // Fixed-size array to store queue elements

public:
    Queue();        // Constructor to initialize indices

    bool isEmpty(); // Check if queue is empty

    bool isFull();  // Check if queue is full

    void push(int); // Add item to queue

    int front();    // Get the front item without removing it

    void pop();     // Remove the front item

    void clear();   // Reset the queue

    int size();     // Return the number of items in the queue

    virtual ~Queue(); // Destructor
};

#endif // QUEUE_H
