#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
// Simple linked-list based queue (declaration only).
// Node and Queue classes are declared here.

class Node {
public:
    pair<string,string> data;
    Node* next;
};

class Queue {
private:
    // helper: insert first node when queue is empty
    void insertFirst(pair<string,string> newValue);
     Node* head;

public:

    Queue();

    bool isEmpty();

    bool isNotEmpty();

    void push(pair<string,string> newValue);

    void pop();

    pair<string,string> front();

    int size();

    ~Queue();
};

#endif // QUEUE_H
