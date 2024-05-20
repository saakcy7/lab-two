#include "queuearray.h"
#include "queue.h"
QueueArray::QueueArray()
{
    this->front = -1;
    this->rear = -1;
}

bool QueueArray::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void QueueArray::enqueue(int data)
{
    if (isEmpty())
    {
        front++;
        rear++;
        arr[rear] = data;
        cout << data << " added to queue" << endl;
    }
    else if (isFull())
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        rear++;
        arr[rear] = data;
        cout << data << " added to queue" << endl;
    }
}
void QueueArray::dequeue()
{
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (isEmpty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        front++;
    }
}
void QueueArray::first()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "First element: " << arr[front] << endl;
    }
}
void QueueArray::last()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Last element: " << arr[rear] << endl;
    }
}

void QueueArray::traverse()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Displaying the contents of queue" << endl;
        for (int i = front; i <=rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

bool QueueArray::isFull()
{
    if (rear == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}