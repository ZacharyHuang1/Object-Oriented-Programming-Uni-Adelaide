#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge(500, 300);

    std::cout << "Fridge power rating: " << fridge.get_PowerRating() << " watts" << std::endl;
    std::cout << "Fridge volume: " << fridge.getVolume() << " liters" << std::endl;

    fridge.turnOn();
    std::cout << "Fridge is on: " << fridge.get_isOn() << std::endl;

    std::cout << "Fridge power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;

    return 0;
}