#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "Common.h"

class PriorityQueue {
private:
    Vehicle* head;
    int cnt;
public:
    PriorityQueue();
    ~PriorityQueue();
    void insertSorted(Vehicle* v); // larger priority first
    Vehicle* removeFront();
    Vehicle* peek();
    bool isEmpty();
    int size();
    Vehicle* searchByID(VID id);
    bool removeByID(VID id);
    void print();
};

#endif


