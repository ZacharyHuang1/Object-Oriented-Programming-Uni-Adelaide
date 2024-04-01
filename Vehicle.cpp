#include "Vehicle.h"

Vehicle::Vehicle(int id) {
    ID = id;
    timeOfEntry = std::time(nullptr); // Initialize timeOfEntry to current time
}

int Vehicle::getID() {
    return ID;
}

Vehicle::~Vehicle() {}