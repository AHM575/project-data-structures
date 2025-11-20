#ifndef EVQUEUE_H
#define EVQUEUE_H

#include "PriorityQueue.h"

class EVQueue {
private:
    PriorityQueue pq;
public:
    EVQueue();
    ~EVQueue();
    void push(Vehicle* v);
    Vehicle* pop();
    Vehicle* top();
    bool empty();
    int size();
    Vehicle* find(VID id);
    bool removeByID(VID id);
    void print();
};

#endif
