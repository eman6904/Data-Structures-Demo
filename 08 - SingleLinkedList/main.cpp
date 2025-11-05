#include <iostream>
#include"LinkedList.h"
using namespace std;

int main()
{
    LinkedList list;

    cout << "=== Linked List Demo ===\n\n";

    // Insert some elements
    list.insertFirst(10);
    list.insertLast(20);
    list.insertLast(30);
    list.insertFirst(5);

    cout << "After inserting elements:\n";
    list.displayItems(); // Expected: 5 10 20 30

    // Insert after a specific value
    list.insertAfter(10, 15);
    cout << "\nAfter inserting 15 after 10:\n";
    list.displayItems(); // Expected: 5 10 15 20 30

    // Insert before a specific value
    list.insertBefore(20, 18);
    cout << "\nAfter inserting 18 before 20:\n";
    list.displayItems(); // Expected: 5 10 15 18 20 30

    // Replace a value
    list.replace(15, 99);
    cout << "\nAfter replacing 15 with 99:\n";
    list.displayItems(); // Expected: 5 10 99 18 20 30

    // Delete first and last
    list.deleteFirst();
    list.deleteLast();
    cout << "\nAfter deleting first and last:\n";
    list.displayItems(); // Expected: 10 99 18 20

    // Delete a specific value
    list.deleteSpecificValue(99);
    cout << "\nAfter deleting 99:\n";
    list.displayItems(); // Expected: 10 18 20

    // Count nodes
    cout << "\nNumber of nodes: " << list.count() << "\n"; // Expected: 3

    return 0;
}
