#include "Event.h"

Event::Event() {
    eID = 0;
    eType = "";
    time = 0;
    vehicleID = -1;
    next = NULL;
}

Event::Event(int id, string type, int t, int vid) {
    eID = id;
    eType = type;
    time = t;
    vehicleID = vid;
    next = NULL;
}

int Event::getEventID() { return eID; }
string Event::getEventType() { return eType; }
int Event::getTime() { return time; }
int Event::getVehicleID() { return vehicleID; }

void Event::printEvent() {
    cout << "Event ID: " << eID
         << " Type: " << eType
         << " Time: " << time
         << " Vehicle: " << vehicleID << endl;
}
