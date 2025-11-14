#include "Queue.h"
#include <iostream>
using namespace std;

// Constructor: initialize an empty queue
Queue::Queue() {
    head = nullptr;
}

// Helper: insert the very first node (used when queue is empty)
void Queue::insertFirst(int newValue) {
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    head = newNode;
}

// Check if queue is empty
bool Queue::isEmpty() {
    return head == nullptr;
}

// Check if queue is not empty
bool Queue::isNotEmpty() {
    return head != nullptr;
}

// Push: add element to the end of the queue
void Queue::enqueue(int newValue) {
    if (isEmpty()) {
        insertFirst(newValue);
        return;
    }

    // traverse to the last node
    Node* lastNode = head;
    while (lastNode->next != nullptr) {
        lastNode = lastNode->next;
    }

    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    lastNode->next = newNode;
}

// Pop: remove element from the front
void Queue::dequeue() {
    if (head == nullptr) {
        // queue already empty
        cout << "Queue is already empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Front: return the front element (or -1 if empty)
int Queue::front() {
    if (head == nullptr) {
        cout << "Queue is empty\n";
        return -1;
    }
    return head->data;
}

// Size: count number of elements
int Queue::size() {
    Node* node = head;
    int count = 0;
    while (node != nullptr) {
        ++count;
        node = node->next;
    }
    return count;
}

// Destructor: free remaining nodes (optional cleanup)
Queue::~Queue() {
    while (head != nullptr) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}
