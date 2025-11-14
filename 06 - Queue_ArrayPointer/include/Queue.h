#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int* rearItem;
    int* frontItem;
    int sz;
    int* myQueue;

public:
    Queue(int);

    bool isEmpty();

    bool isFull();

    void enqueue(int);

    int front();

    void dequeue();

    void clear();

    int size();

    virtual ~Queue();
};

#endif // QUEUE_H
