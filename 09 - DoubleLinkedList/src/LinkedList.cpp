#include "LinkedList.h"
#include <iostream>
using namespace std;

//================== Constructor ==================
// Initializes an empty linked list
LinkedList::LinkedList()
{
    header = NULL;
}

//================== Check if Empty ==================
bool LinkedList::isEmpty()
{

    return header == NULL;
}

//================== Check if Full ==================
// (Usually not used in linked lists, but kept for consistency)
bool LinkedList::isNotEmpty()
{

    return header != NULL;
}

//================== Insert at the Beginning ==================
void LinkedList::insertFirst(int newValue)
{

    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->prev = NULL;

    if(isEmpty())
        newNode->next = NULL;
    else
    {
        newNode->next = header;
        header->prev = newNode;
    }

    header = newNode;
}

//================== Insert After a Specific Value ==================
void LinkedList::insertAfter(int value, int newValue)
{
    if(!isFound(value))
    {
        cout<<value<<" not found\n";
        return ;
    }

    Node *node = header;
    while(node->next!=NULL)
    {
        if(node->data == value)
            break;
        node = node->next;
    }

    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->next = node->next;
    newNode->prev = node;
    if(node->next!=NULL)
        node->next->prev = newNode;
     node->next = newNode;
}

//================== Insert Before a Specific Value ==================
void LinkedList::insertBefore(int value, int newValue)
{
    if(!isFound(value))
    {
        cout<<value<<" not found\n";
        return ;
    }

    Node *node = header;
    while(node->next!=NULL)
    {
        if(node->data == value)
            break;
        node = node->next;
    }

    Node *newNode = new Node();
    newNode->data = newValue;
    newNode->prev = node->prev;
    newNode->next = node;
    if(node->prev!=NULL)
        node->prev->next = newNode;
    else
        header = newNode;
    node->prev = newNode;
}

//================== Insert at the End ==================
void LinkedList::insertLast(int newValue)
{

    if(isEmpty())
        insertFirst(newValue);
    else
    {
        Node *newNode = new Node(),*lastNode = header;
        newNode->data = newValue;
        newNode->next = NULL;

        while(lastNode->next!=NULL)
        {

            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
        newNode->prev = lastNode;

    }
}

//================== Delete the First Node ==================
void LinkedList::deleteFirst()
{

    if(isEmpty())
    {
        cout<<"Linked List is empty!\n";
        return ;
    }
    Node* temp = header;
    if (header->next == NULL)
        header = NULL;
    else
    {
        header = header->next;
        header->prev = NULL;
    }
    delete temp;

}

//================== Delete the Last Node ==================
void LinkedList::deleteLast()
{
    if(isEmpty())
    {
        cout<<"Linked List is empty!\n";
        return;
    }
    Node *lastNode = header;
    while(lastNode->next!=NULL)
    {
        lastNode = lastNode->next;
    }
    if(lastNode->prev == NULL)
        deleteFirst();
    else
    {
        lastNode->prev->next = NULL;
        delete lastNode;
    }
}

//================== Delete a Specific Value ==================
void LinkedList::deleteSpecificValue(int value)
{

    if(!isFound(value))
    {
        cout<<value<<" not found!\n";
        return ;
    }
    Node *current = header;
    while(current->next!=NULL)
    {
        if(current->data == value)
            break;
        current = current->next;
    }
    if(current->next == NULL)
        deleteLast();
    else if(current->prev == NULL)
        deleteFirst();
    else
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
}

//================== Display All Items ==================
void LinkedList::displayItems()
{
    if(isEmpty())
    {
        cout<<"Linked List is empty!\n";
        return;
    }
    cout<<"Linked List Elements: \n";
    Node *current = header;
    while(current->next!=NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<current->data<<"\n";
}

//================== Replace an Old Value with a New One ==================
void LinkedList::replace(int oldValue, int newValue)
{
    if(!isFound(oldValue))
    {
        cout<<oldValue<<" not found!\n";
        return;
    }
    Node *current = header;
    while(current->next!=NULL)
    {
        if(current->data == oldValue)
            current->data = newValue;
        current = current->next;
    }
    if(current->data == oldValue)
        current->data = newValue;
}

//================== Count Number of Nodes ==================
int LinkedList::count()
{
    if(isEmpty())
        return 0;
    int counter = 1;
    Node *current = header;
    while(current->next!=NULL)
    {
        current = current->next;
        counter++;
    }
    return counter;
}

//================== Check if a Value Exists ==================
bool LinkedList::isFound(int value)
{
    if(isEmpty())
        return 0;
    Node *current = header;
    while(current->next!=NULL)
    {
        if(current->data == value)
            return true;
        current = current->next;

    }
    return current->data == value;
}
void LinkedList::clear()
{
    Node* current = header;
    while (current != NULL)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    header = NULL;
}
//================== Destructor ==================
LinkedList::~LinkedList() {

    clear();
}
