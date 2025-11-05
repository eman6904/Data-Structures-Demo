#ifndef QUEUE_H
#define QUEUE_H

// Simple linked-list based queue (declaration only).
// Node and Queue classes are declared here.

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    // helper: insert first node when queue is empty
    void insertFirst(int newValue);

public:
    Node* head;                 // pointer to the front of the queue

    Queue();                    // constructor
    bool isEmpty();             // check if queue is empty
    bool isNotEmpty();          // check if queue is not empty
    void push(int newValue);    // add element to the end
    void pop();                 // remove element from the front
    int front();                // get the front element (returns -1 if empty)
    int size();                 // count elements in the queue
    ~Queue();                   // destructor (default)
};

#endif // QUEUE_H
