#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};
class LinkedList
{
private:
    Node* header;
public:
    LinkedList();

    bool isEmpty();

    bool isNotEmpty();

    void insertFirst(int newValue);

    void insertAfter(int value, int newValue);

    void insertBefore(int value, int newValue);

    void insertLast(int newValue);

    void deleteFirst();

    void deleteLast();

    void deleteSpecificValue(int value);

    void displayItems();

    void replace(int oldValue, int newValue);

    int count();

    bool isFound(int number);

    void clear();

    virtual ~LinkedList();

};

#endif // LINKEDLIST_H
