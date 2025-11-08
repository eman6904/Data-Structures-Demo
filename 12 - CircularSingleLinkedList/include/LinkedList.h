#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int data;
    Node* next;
};
class LinkedList
{
private:
    Node* head;
    Node* tail;
public:

    LinkedList();

    bool isEmpty();

    void insert(int item);

    void remove(int item);

    void display();

    virtual ~LinkedList();

};

#endif // LINKEDLIST_H
