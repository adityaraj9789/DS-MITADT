#include<iostream>

using namespace std;
#define MAX 100
 class ArrayStack
 {
    int arr[MAX];
    int top = -1;
    bool isEmpty()
    {
        return top = -1;
    }
    bool isFull()
    {
        return top ==MAX -1;

    }
    void push(int x)
    {
        if (isFull())
        {
            cout<<"Overflow";
            return;
        }
        arr(++top) = x;

    }
    int pop()
    {
        if (isEmpty())
        {
            cout<<"Underflow";
            return - 1;

        }
        return arr(top--);
    }
 }