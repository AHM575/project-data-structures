#ifndef COMMON_H
#define COMMON_H

#include <iostream>

typedef int VID;

struct Vehicle {
    VID id;
    int type;
    int AT;
    int INTid;
    int LN;
    int XD;
    int remainingXD;
    int priority;
    int waiting;
    Vehicle* next;
    Vehicle() { id=0; type=0; AT=0; INTid=0; LN=0; XD=0; remainingXD=0; priority=0; waiting=0; next=nullptr; }
};

struct Event {
    int time;
    int code;
    int vid;
    int params[4];
    Event* next;
    Event() { time=0; code=0; vid=0; for(int i=0;i<4;i++) params[i]=0; next=nullptr; }
};

#endif
