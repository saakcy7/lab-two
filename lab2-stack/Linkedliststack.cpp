#include <iostream>
#define MAX_SIZE 5
#include "Linkedliststack.h"
#include "stack.h"
#include "linkedlist.h"
using namespace std;

bool Linkedliststack::isEmpty()
{
    if (this->list.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Linkedliststack::isFull()
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

void Linkedliststack::push(int data)
{
    if (!this->isFull())
    {
        top_index += 1;
        list.addToHead(data);
    }
    else
    {
        cout << " Cannot add more! Stack Overflow" << endl;
    }
}

bool Linkedliststack::pop(int &value)
{
    if (!list.isEmpty())
    {
        value = this->list.head->info;

        list.removeFromHead();
        cout<<"The popped data is"<<value<<endl;
        return true;
    }
    else
    {
        cout << "Stack Underflow" << endl;
        return false;
    }
}

bool Linkedliststack::top(int &value)
{
    if (!list.isEmpty())
    {
        value = this->list.head->info;
         cout<<"The popped data is"<<value<<endl;
        return true;
    }
    else
    {
        cout << "The stack is already empty" << endl;
        return false;
    }
}


void Linkedliststack::traverse()
{
    list.traverse();
}
