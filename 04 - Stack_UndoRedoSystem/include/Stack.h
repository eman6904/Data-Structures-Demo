#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
// Simple stack implemented using a linked list
class Node {
public:
    string data;
    Node* next;
};

class Stack {
private:
    Node* head;
public:

    Stack();

    bool isEmpty();

    bool isNotEmpty();

    void push(string newValue);

    void pop();

    string top();

    int size();

    ~Stack();
};

#endif // STACK_H
