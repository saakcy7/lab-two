#include "queue.h"
class QueueArray : public Queue
{
private:
    int front;
    int rear;
    int arr[MAX];

public:
    QueueArray();
    ~QueueArray();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void enqueue(int data);
    virtual void dequeue();
    virtual void traverse();
    virtual void first();
    virtual void last();
};