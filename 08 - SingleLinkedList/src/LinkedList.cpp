#include "LinkedList.h"

// Constructor: initializes the list as empty
LinkedList::LinkedList() {
    header = NULL;
}

// Checks if the linked list is empty
bool LinkedList::isEmpty() {
    return header == NULL;
}

// Checks if the linked list is not empty
bool LinkedList::isNotEmpty() {
    return header != NULL;
}

// Inserts a new node at the beginning of the list
void LinkedList::insertFirst(int newValue) {
    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = header;
    header = newNode;
}

// Inserts a new node after a given value
void LinkedList::insertAfter(int value, int newValue) {
    Node *leftNode = header;

    // Make sure the target value exists
    if (!isFound(value)) {
        cout << value << " does not exist in the linked list\n";
        return;
    }

    // Find the node with the target value
    while (leftNode != NULL && leftNode->data != value) {
        leftNode = leftNode->next;
    }

    // Create a new node and link it after the target node
    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = leftNode->next;
    leftNode->next = newNode;
}

// Inserts a new node before a given value
void LinkedList::insertBefore(int value, int newValue) {
    if (!isFound(value)) {
        cout << value << " does not exist in the linked list\n";
        return;
    }

    // If the target node is the first node
    if (header->data == value) {
        insertFirst(newValue);
        return;
    }

    // Find the node before the target value
    Node *leftNode = header;
    while (leftNode->next != NULL && leftNode->next->data != value) {
        leftNode = leftNode->next;
    }

    // Insert the new node before the target node
    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = leftNode->next;
    leftNode->next = newNode;
}

// Inserts a new node at the end of the list
void LinkedList::insertLast(int newValue) {
    if (isEmpty()) {
        insertFirst(newValue);
        return;
    }

    // Find the last node
    Node *lastNode = header;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    // Create and attach the new node
    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = NULL;
    lastNode->next = newNode;
}

// Deletes the first node in the list
void LinkedList::deleteFirst() {
    if (isEmpty()) {
        cout << "Linked list is empty\n";
        return;
    }

    Node *temp = header;
    header = header->next;
    delete temp;
}

// Deletes the last node in the list
void LinkedList::deleteLast() {
    if (isEmpty()) {
        cout << "Linked list is empty\n";
        return;
    }

    // If there's only one node
    if (header->next == NULL) {
        delete header;
        header = NULL;
        return;
    }

    // Find the second-to-last node
    Node *current = header;
    while (current->next->next != NULL) {
        current = current->next;
    }

    delete current->next;
    current->next = NULL;
}

// Deletes a node with a specific value
void LinkedList::deleteSpecificValue(int value) {
    if (isEmpty()) {
        cout << "Linked list is empty\n";
        return;
    }

    if (!isFound(value)) {
        cout << value << " is not found\n";
        return;
    }

    // If the value is in the first node
    if (header->data == value) {
        deleteFirst();
        return;
    }

    // Find the node and delete it
    Node *node1 = header;
    Node *node2 = header->next;

    while (node2 != NULL && node2->data != value) {
        node1 = node2;
        node2 = node2->next;
    }

    if (node2 != NULL) {
        node1->next = node2->next;
        delete node2;
    }
}

// Prints all items in the list
void LinkedList::displayItems() {
    if (isEmpty()) {
        cout << "Linked list is empty\n";
        return;
    }

    Node *node = header;
    while (node != NULL) {
        cout << node->data << "\n";
        node = node->next;
    }
}

// Replaces all nodes that contain a specific value
void LinkedList::replace(int oldValue, int newValue) {
    if (isEmpty()) {
        cout << "Linked list is empty\n";
        return;
    }

    if (!isFound(oldValue)) {
        cout << oldValue << " is not found\n";
        return;
    }

    Node *node = header;
    while (node != NULL) {
        if (node->data == oldValue)
            node->data = newValue;
        node = node->next;
    }
}

// Counts how many nodes exist in the list
int LinkedList::count() {
    Node *node = header;
    int nodeNumber = 0;

    while (node != NULL) {
        nodeNumber++;
        node = node->next;
    }

    return nodeNumber;
}

// Checks if a value exists in the list
bool LinkedList::isFound(int number) {

    Node *node = header;
    while (node != NULL) {
        if (node->data == number)
            return true;
        node = node->next;
    }

    return false;
}
void LinkedList::clear()
{
    Node* node = header;
    while (node != NULL)
    {
        Node* next = node->next;
        delete node;
        node = next;
    }
    header = NULL;
}
//Destructor to clear memory
LinkedList::~LinkedList() {

    clear();
}
