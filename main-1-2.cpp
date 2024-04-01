#include <iostream>
#include "parkinglot.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    ParkingLot lot(10);

    char choice;
    int id;

    while (lot.getCount() < lot.getMaxCapacity()) {
        std::cout << "Enter vehicle type (c for car, b for bus, m for motorbike): ";
        std::cin >> choice;

        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        Vehicle* vehicle;
        switch (choice) {
            case 'c':
                vehicle = new Car(id);
                break;
            case 'b':
                vehicle = new Bus(id);
                break;
            case 'm':
                vehicle = new Motorbike(id);
                break;
            default:
                std::cout << "Invalid vehicle type" << std::endl;
                continue;
        }

        if (!lot.parkVehicle(vehicle)) {
            delete vehicle;
        }
    }

    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> id;
    lot.unparkVehicle(id);

    return 0;
}