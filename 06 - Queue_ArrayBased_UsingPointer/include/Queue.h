#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int* last_element;
    int* first_element;
    int sz;
    int* myQueue;

public:
    Queue(int);

    bool isEmpty();

    bool isFull();

    void push(int);

    int front();

    void pop();

    void clear();

    int size();

    virtual ~Queue();
};

#endif // QUEUE_H
