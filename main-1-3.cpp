#include <iostream>
#include "parkinglot.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    ParkingLot lot(10);

    char choice;
    int id;
    int numCars = 0, numBuses = 0, numMotorbikes = 0;

    while (lot.getCount() < lot.getMaxCapacity()) {
        std::cout << "Enter vehicle type (c for car, b for bus, m for motorbike): ";
        std::cin >> choice;

        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        Vehicle* vehicle;
        switch (choice) {
            case 'c':
                if (numCars < 5) {
                    vehicle = new Car(id);
                    numCars++;
                } else {
                    std::cout << "Maximum number of cars already parked" << std::endl;
                    continue;
                }
                break;
            case 'b':
                if (numBuses < 3) {
                    vehicle = new Bus(id);
                    numBuses++;
                } else {
                    std::cout << "Maximum number of buses already parked" << std::endl;
                    continue;
                }
                break;
            case 'm':
                if (numMotorbikes < 2) {
                    vehicle = new Motorbike(id);
                    numMotorbikes++;
                } else {
                    std::cout << "Maximum number of motorbikes already parked" << std::endl;
                    continue;
                }
                break;
            default:
                std::cout << "Invalid vehicle type" << std::endl;
                continue;
        }

        if (!lot.parkVehicle(vehicle)) {
            delete vehicle;
        }
    }

    int maxParkingDuration = 15;
    int numOverstayingVehicles = lot.countOverstayingVehicles(maxParkingDuration);
    std::cout << "Number of vehicles overstaying for more than " << maxParkingDuration << " seconds: " << numOverstayingVehicles << std::endl;

    return 0;
}