#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

#include "Common.h"

class EventQueue {
private:
    Event* head;
    int cnt;
public:
    EventQueue();
    ~EventQueue();
    void insertSorted(Event* e); // by e->time ascending
    Event* removeFront();
    Event* peek();
    bool isEmpty();
    int size();
    Event* searchByVID(int vid);
    bool removeByVID(int vid);
    void print();
};

#endif
