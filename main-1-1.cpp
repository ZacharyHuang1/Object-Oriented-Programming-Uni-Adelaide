#include <iostream>
#include "Appliance.h"

int main() {
    Appliance fridge(500);
    Appliance TV;

    std::cout << "Fridge power rating: " << fridge.get_PowerRating() << " watts" << std::endl;
    std::cout << "TV power rating: " << TV.get_PowerRating() << " watts" << std::endl;

    fridge.turnOn();
    TV.set_PowerRating(200);
    TV.turnOn();

    std::cout << "\nFridge is on: " << fridge.get_isOn() << std::endl;
    std::cout << "TV is on: " << TV.get_isOn() << std::endl;

    std::cout << "\nFridge power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;
    std::cout << "TV power consumption: " << TV.getPowerConsumption() << " watts" << std::endl;

    return 0;
}