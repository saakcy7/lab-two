#include <iostream>
#include "linkedlist.h"
#include "queue.h"
#include "queuearray.h"
#include "queuelinkedlist.h"
using namespace std;
int main()
{
    cout << endl;
    cout << "Queue Implementing Linked List" << endl;
    cout << "Adding data" << endl;

    Queue *q = new QueueArray();
    q->enqueue(4);
    q->enqueue(3);
    q->enqueue(8);
    q->traverse();

    q->dequeue();
    q->dequeue();
    q->traverse();

    q->enqueue(34);
    q->enqueue(46);
    q->enqueue(25);
    q->enqueue(46);
    q->enqueue(25);

    q->traverse();

    q->first();
    q->last();
    delete q;
}