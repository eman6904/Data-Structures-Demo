
/*Definition
A circular linked list is a linked list in which the last node does not point to NULL; instead, it points back to the first node (the head), forming a continuous loop.

Importance
A circular linked list is useful when operations require continuous cycling through elements without stopping. It makes rotation, repeated traversal, and looping over data efficient because there is no natural end.

What makes it different from a linear linked list

1. No NULL termination

Circular: last node points to the head.

Linear: last node points to NULL.

2. Continuous traversal

Circular lists allow you to keep moving forward indefinitely without checking for the end.

Linear lists stop when you reach NULL.

3. Fast rotations

In circular lists, the head can shift to the next node in O(1).

In linear lists, rotation requires traversing or rearranging pointers manually.

4. Useful for round-based or cyclic problems
Circular lists are ideal for situations such as:

Round-robin scheduling

Repeated playlists

Token passing in networks

Simulating cycles

5. Efficient for queue implementation (Circular Queue)
They avoid wasted memory and avoid shifting elements.*/
