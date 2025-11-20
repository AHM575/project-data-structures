#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
private:
    int id;
    string type;
    int arrivalTime;
    int priority;
    string status;

public:
    Vehicle* next;

    Vehicle();
    Vehicle(int _id, string _type, int _time, int _priority = 0);

    int getID();
    string getType();
    int getArrivalTime();
    int getPriority();
    string getStatus();

    void setType(string t);
    void setPriority(int p);
    void setStatus(string s);

    void printVehicle();
};

#endif
