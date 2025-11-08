#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList list;

    // Insert some elements
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "After inserting elements:\n";
    list.display();

    // Remove an element from the middle
    cout << "\nRemoving 20:\n";
    list.remove(20);
    list.display();

    // Remove the head
    cout << "\nRemoving 40 (current head):\n";
    list.remove(40);
    list.display();

    // Remove the tail
    cout << "\nRemoving 10 (current tail):\n";
    list.remove(10);
    list.display();

    // Remove the last remaining element
    cout << "\nRemoving 30 (last element):\n";
    list.remove(30);
    list.display();

    return 0;
}
