#include "queue.h"
#include "linkedlist.h"
class QueueLinkedList : public Queue
{
public:
    QueueLinkedList();
    ~QueueLinkedList();
    void enqueue(int data);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void first();
    void last();
    void traverse();

private:
    LinkedList list;
    int top;
};