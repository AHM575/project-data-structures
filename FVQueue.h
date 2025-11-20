#ifndef FVQUEUE_H
#define FVQUEUE_H

#include "Queue.h"

class FVQueue {
private:
    Queue q;
public:
    FVQueue();
    ~FVQueue();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    bool isEmpty();
    int size();
    Vehicle* findByID(VID id);
    bool removeByID(VID id);
    void print();
};

#endif
