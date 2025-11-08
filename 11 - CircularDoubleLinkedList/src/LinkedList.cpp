#include "LinkedList.h"
#include<iostream>
using namespace std;

// Constructor: initialize an empty list
LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

// Check if the list is empty
bool LinkedList::isEmpty()
{
    return head == NULL;
}

// Insert a new node at the beginning of the list
void LinkedList::insert(int item)
{
    Node* newNode = new Node(); // create a new node
    newNode->data = item;

    if(isEmpty())
    {
        // If the list is empty, point head and tail to the new node
        head = newNode;
        newNode->prev = head;
        newNode->next = head;
        tail = head;
        return;
    }

    // For non-empty list:
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    // maintain circular connection
    head->prev = tail;
    tail->next = head;
}

// Remove a node with the given value
void LinkedList::remove(int item)
{
    Node* current = head;

    // Traverse until the tail
    while(current != tail)
    {
        if(current->data == item)
        {
            // If the node to remove is the head
            if(current->prev == tail)
                head = current->next;

            // Update links of neighboring nodes
            current->next->prev = current->prev;
            current->prev->next = current->next;

            delete current; // free memory
            return;
        }

        current = current->next;
    }

    // Check the tail node separately
    if(current->data == item)
    {
        if(tail == head) // only one node in the list
        {
            head = NULL;
            tail = NULL;
            delete current;
            return;
        }

        // Update links
        current->next->prev = current->prev;
        current->prev->next = current->next;
        tail = current->prev; // update tail
        delete current;
        return;
    }

    cout << item << " not found\n"; // value not in the list
}

// Display all elements in the list
void LinkedList::display()
{
    if(isEmpty())
    {
        cout << "LinkedList is empty!\n";
        return;
    }

    cout << "Linked List Elements: \n";

    Node* current = head;

    // Traverse from head to tail
    while(current != tail)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << current->data << "\n";
}

// Destructor: free memory for all nodes
LinkedList::~LinkedList()
{
    if(!isEmpty())
    {
        Node* current = head;
        // Use do-while to handle circular structure
        do
        {
            Node* node = current;
            current = current->next;
            delete node; // delete each node
        }
        while(current != head);
    }
}
