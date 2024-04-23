#include <iostream>
#include "Appliance.h"

int main() {
    Appliance fridge(500);
    Appliance TV;

    std::cout << "Fridge power rating: " << fridge._getPowerRating() << " watts" << std::endl;
    std::cout << "TV power rating: " << TV._getPowerRating() << " watts" << std::endl;

    fridge.turnOn();
    TV._setPowerRating(200);
    TV.turnOn();

    std::cout << "\nFridge is on: " << fridge._isOn() << std::endl;
    std::cout << "TV is on: " << TV._isOn() << std::endl;

    std::cout << "\nFridge power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;
    std::cout << "TV power consumption: " << TV.getPowerConsumption() << " watts" << std::endl;

    return 0;
}