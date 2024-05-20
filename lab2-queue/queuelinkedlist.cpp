#include "queuelinkedlist.h"
#include "queue.h"
#include "linkedlist.h"
QueueLinkedList::QueueLinkedList()
{
    top = -1;
}

bool QueueLinkedList::isEmpty()
{
    if (list.isEmpty())
    {
        return true;
    }
    return false;
}

bool QueueLinkedList::isFull()
{
    if (top == MAX)
    {
        return true;
    }
    return false;
}

void QueueLinkedList::enqueue(int data)
{
    if (isEmpty())
    {

        list.addToHead(data);

        cout << data << " added to queue" << endl;
        top++;
    }
    else if (isFull())
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        list.addToTail(data);
        cout << data << " added to queue" << endl;

        top++;
    }
}

void QueueLinkedList::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << "Removing From Top" << endl;
        list.removeFromHead();
    }
}

void QueueLinkedList::first()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "First element: " << list.head->info << endl;
    }
}

void QueueLinkedList::last()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Last element: " << list.tail->info << endl;
    }
}

void QueueLinkedList::traverse()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Displaying contents of Queue" << endl;
        list.traverse();
        cout << endl;
    }
}