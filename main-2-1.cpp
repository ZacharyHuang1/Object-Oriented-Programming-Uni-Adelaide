#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge(500, 300);

    std::cout << "Fridge power rating: " << fridge._getPowerRating() << " watts" << std::endl;
    std::cout << "Fridge volume: " << fridge._getVolume() << " liters" << std::endl;

    fridge.turnOn();
    std::cout << "Fridge is on: " << fridge._isOn() << std::endl;

    std::cout << "Fridge power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;

    return 0;
}