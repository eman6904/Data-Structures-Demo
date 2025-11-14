#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int rearItem;
    int frontItem;
    static const int sz = 100;
    int myQueue[sz];

public:
    Queue();

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
