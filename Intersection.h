#ifndef INTERSECTION_H
#define INTERSECTION_H

#include "Vehicle.h"

class Intersection {
public:
    int id;
    int lanesCount;

    Vehicle** laneQueues;
    bool* blocked;

    Intersection() {
        id = 0;
        lanesCount = 0;
        laneQueues = NULL;
        blocked = NULL;
    }

    Intersection(int _id, int _lanes) {
        id = _id;
        lanesCount = _lanes;

        laneQueues = new Vehicle*[lanesCount];
        blocked = new bool[lanesCount];

        for (int i = 0; i < lanesCount; i++) {
            laneQueues[i] = NULL;
            blocked[i] = false;
        }
    }
};

#endif
