#ifndef NCQUEUE_H
#define NCQUEUE_H

#include "Queue.h"

class NCQueue {
private:
    Queue q;
public:
    NCQueue();
    ~NCQueue();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    bool isEmpty();
    int size();
    Vehicle* findByID(VID id);
    bool removeByID(VID id);
    void print();
};

#endif
