#ifndef STACK_H
#define STACK_H


class Stack
{
    private:
    int next;
    int length;
    int myStack[100];//initial size
    public:
        Stack(int);

        bool isFull();

        bool isEmpty();

        void push(int item);

        void pop();

        int top();

        void display();

        int getItemsNumber();

        virtual ~Stack();

};

#endif // STACK_H
