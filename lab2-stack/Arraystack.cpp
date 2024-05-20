
#include <iostream>
#include "Arraystack.h"
#include "linkedlist.h"
#define MAX_SIZE 5
using namespace std;

Arraystack::Arraystack()
{
    top_index = -1;
}

bool Arraystack::isFull()
{
    if (top_index > MAX_SIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Arraystack::isEmpty()
{
    if (top_index < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Arraystack::push(int data)
{

    if (!this->isFull())
    {
        top_index += 1;
        arr[top_index] = data;
    }
    else
    {
        cout << "Stack Overflow" << endl;
    }
}

bool Arraystack::top(int &data)
{
    if (!this->isEmpty())
    {
        data = arr[top_index];
        cout<<"The top element is"<<data<<endl;
        return true;
    }
    else
    {
        cout << "Stack is Empty" << endl;
        return false;
    }
}

bool Arraystack::pop(int &data)
{
    if (!this->isEmpty())
    {
        data = arr[top_index];
        top_index--;
        cout<<"popped element is"<<data<<endl;
        return true;
    }
    else
    {
        cout << "The stack is empty" << endl;
        return false;
    }
}

void Arraystack::traverse() {
    for(int i=0;i<MAX_SIZE;i++)
    {
        cout<<arr[i]<<endl;
    }
}