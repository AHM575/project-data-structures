#ifndef QUEUE_H
#define QUEUE_H

#include "Common.h"

class Queue {
private:
    Vehicle* head;
    Vehicle* tail;
    int cnt;
public:
    Queue();
    ~Queue();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    bool isEmpty();
    int size();
    void print();
    Vehicle* searchByID(VID id);
    bool removeByID(VID id);
};

#endif


