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
     Node* head;

public:

    Queue();

    bool isEmpty();

    bool isNotEmpty();

    void push(int newValue);

    void pop();

    int front();

    int size();

    ~Queue();
};

#endif // QUEUE_H
