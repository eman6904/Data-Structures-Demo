#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int last_element;
    int first_element;
    static const int sz = 10;
    int myQueue[sz];

public:
    Queue();

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
