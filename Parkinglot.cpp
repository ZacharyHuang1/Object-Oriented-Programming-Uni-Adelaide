#include "parkinglot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const {
    return currentCount;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
    vehicles.push_back(vehicle);
    currentCount++;
    return true;
}

bool ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            currentCount--;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    std::time_t now = std::time(nullptr);
    for (const Vehicle* vehicle : vehicles) {
        int parkingDuration = vehicle->getParkingDuration();
        if (parkingDuration > maxParkingDuration) {
            count++;
        }
    }
    return count;
}