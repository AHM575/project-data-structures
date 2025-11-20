#include "Vehicle.h"

Vehicle::Vehicle() {
    id = 0;
    type = "";
    arrivalTime = 0;
    priority = 0;
    status = "waiting";
    next = NULL;
}

Vehicle::Vehicle(int _id, string _type, int _time, int _priority) {
    id = _id;
    type = _type;
    arrivalTime = _time;
    priority = __priority;
    status = "waiting";
    next = NULL;
}

int Vehicle::getID() { return id; }
string Vehicle::getType() { return type; }
int Vehicle::getArrivalTime() { return arrivalTime; }
int Vehicle::getPriority() { return priority; }
string Vehicle::getStatus() { return status; }

void Vehicle::setType(string t) { type = t; }
void Vehicle::setPriority(int p) { priority = p; }
void Vehicle::setStatus(string s) { status = s; }

void Vehicle::printVehicle() {
    cout << "Vehicle ID: " << id
         << " Type: " << type
         << " AT: " << arrivalTime
         << " Priority: " << priority
         << " Status: " << status << endl;
}


