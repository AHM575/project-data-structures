#ifndef PTQUEUE_H
#define PTQUEUE_H

#include "Queue.h"

class PTQueue {
private:
    Queue q;
public:
    PTQueue();
    ~PTQueue();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    bool isEmpty();
    int size();
    Vehicle* findByID(VID id);
    bool removeByID(VID id);
    void print();
};

#endif
