#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    std::vector<Vehicle*> vehicles;

    // Create cars
    for (int i = 0; i < numCars; ++i) {
        int id;
        std::cout << "Enter the ID for car " << i + 1 << ": ";
        std::cin >> id;
        vehicles.push_back(new Car(id));
    }

    // Create buses
    for (int i = 0; i < numBuses; ++i) {
        int id;
        std::cout << "Enter the ID for bus " << i + 1 << ": ";
        std::cin >> id;
        vehicles.push_back(new Bus(id));
    }

    // Create motorbikes
    for (int i = 0; i < numMotorbikes; ++i) {
        int id;
        std::cout << "Enter the ID for motorbike " << i + 1 << ": ";
        std::cin >> id;
        vehicles.push_back(new Motorbike(id));
    }

    // Print parking duration for each vehicle
    std::cout << "\nParking durations:\n";
    for (const auto& vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds\n";
        delete vehicle;
    }

    return 0;
}