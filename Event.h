#ifndef EVENT_H
#define EVENT_H

#include <iostream>
using namespace std;

class Event {
private:
    int eID;
    string eType;
    int time;
    int vehicleID;

public:
    Event* next;

    Event();
    Event(int id, string type, int t, int vid = -1);

    int getEventID();
    string getEventType();
    int getTime();
    int getVehicleID();

    void printEvent();
};

#endif
