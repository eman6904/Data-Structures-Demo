#ifndef STACK_H
#define STACK_H


class Stack
{
    private:
    int *nextPtr;
    int length;
    int *myStack;
    public:
        Stack(int);

        bool isFull();

        bool isEmpty();

        void push(int item);

        void pop();

        int top();

        void display();

        int getItemsNumber();

        void clear();

        virtual ~Stack();

};

#endif // STACK_H
