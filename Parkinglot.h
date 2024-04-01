#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "vehicle.h"
#include <vector>

class ParkingLot {
private:
    int maxCapacity;
    int currentCount;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    int getMaxCapacity() const { return maxCapacity; }
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif