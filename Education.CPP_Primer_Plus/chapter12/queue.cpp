#include "queue.h"
#include "customer.h"
#include <cstdlib>

typedef Customer Item;

Customer::Customer()
{
    arrive = processtime = 0;
}
void Customer::set(long when)
{
    processtime = std::rand() % 3 +1;
    arrive = when;
}

Queue::Queue(int qs) : q_size(qs)
{
    front = rear = nullptr;
    items = 0;
}

bool Queue::end_queue(const int &item)
{
    if (isfull())
        return false;
    Node *add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if (front == 0)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}

bool Queue::dequeue(int &item)
{
    if (front == 0)
        return false;
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = nullptr;
    return true;
}

