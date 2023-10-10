#ifndef QUEUE_H1
#define QUEUE_H

class Queue
{
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queue_count() const;
    bool end_queue(const Item &item);
    bool dequeue(Item &item);
private:
    struct Node
    {
        Item item;
        struct Node *next;
    };
    enum {Q_SIZE = 10};
    Node *front;
    Node *rear;
    int items;
    const int q_size;
    Queue (const Queue &) : q_size(0) {}
    Queue & operator=(const Queue & q) {return *this;}
};

#endif // QUEUE_H

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer();
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};
