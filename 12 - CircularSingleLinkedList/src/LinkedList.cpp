#include "LinkedList.h"
#include<iostream>
using namespace std;

LinkedList::LinkedList()
{
    // Initialize an empty circular linked list
    head = NULL;
    tail = NULL;
}

bool LinkedList::isEmpty()
{
    // Returns true if the list is empty
    return head == NULL;
}

void LinkedList::insert(int item)
{
    // Create a new node and assign its data
    Node* newNode = new Node();
    newNode->data = item;
    newNode->next = head;   // Point new node to the old header

    if(isEmpty())
    {
        // Case: inserting the first node in the list
        head = newNode;
        tail = head;
        return ;
    }

    // Update header to the new node
    head = newNode;

    // Maintain circularity: last node points to the new head
    tail->next = head;
}

void LinkedList::remove(int item)
{
    // Check if the list is empty
    if(isEmpty())
    {
        cout<<"Linked List is empty!\n";
        return ;
    }

    Node* current = head, *prev = NULL;

    // Search from header until reaching the tail
    while(current != tail)
    {
        if(current->data == item)
        {
            // Case: removing the first node
            if(prev == NULL)
            {
                head = current->next;     // Update head
                tail->next = head;        // Maintain circularity
                delete current;
                return;
            }

            // Case: removing a middle node
            prev->next = current->next;
            delete current;
            return;
        }

        // Move forward in the list
        prev = current;
        current = current->next;
    }

    // Check the last node (tail)
    if(current->data == item)
    {
        // Case: the list contains only one node
        if(prev == NULL)
        {
            tail = head = NULL;
            delete current;
            return;
        }

        // Removing the last node and updating tail
        prev->next = head;
        tail = prev;
        delete current;
        return ;
    }

    // Item not found in the list
    cout<<item<<" not found\n";
}

void LinkedList::display()
{
    // Print all elements in the circular list
    if(isEmpty())
    {
        cout<<"Linked List is empty!\n";
        return ;
    }

    cout<<"Linked List Elements: \n";

    Node* current = head;

    // Print nodes from head until the tail
    while(current != tail)
    {
        cout<<current->data<<" ";
        current = current->next;
    }

    // Print the last node
    cout<<current->data<<"\n";
}

LinkedList::~LinkedList()
{
    // Destructor: deletes all nodes to free memory
    if (isEmpty()) return;

    Node* current = head;

    // Delete all nodes except the tail
    while(current != tail)
    {
        Node* node = current;
        current = current->next;
        delete node;
    }

    // Delete the last node
    delete tail;
}
