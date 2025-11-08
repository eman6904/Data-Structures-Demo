#include "Stack.h"
#include <iostream>
using namespace std;

// Constructor: initializes an empty stack
Stack::Stack() {
    head = nullptr;
}

// Check if stack is empty
bool Stack::isEmpty() {
    return head == nullptr;
}

// Check if stack is not empty
bool Stack::isNotEmpty() {
    return head != nullptr;
}

// Push: add element to the top of the stack
void Stack::push(int newValue) {
    Node* newNode = new Node();
    newNode->data = newValue;

    newNode->next = head;
    head = newNode;
}

// Pop: remove element from the top
void Stack::pop() {
    if (head == nullptr) {
        cout << "Stack is already empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Top: return top element
int Stack::top() {
    if (head == nullptr) {
        cout << "Stack is empty\n";
        return -1;
    }
    return head->data;
}

// Size: count number of elements
int Stack::size() {
    Node* node = head;
    int count = 0;

    while (node != nullptr) {
        count++;
        node = node->next;
    }
    return count;
}

// Destructor: delete all remaining nodes
Stack::~Stack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
