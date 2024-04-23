#include <iostream>
#include "Fridge.h"

int main() {
    Fridge* fridge = new Fridge(500, 300);

    std::cout << "Initial power rating: " << fridge->_getPowerRating() << " watts" << std::endl;
    std::cout << "Initial volume: " << fridge->_getVolume() << " litres" << std::endl;

    fridge->_setVolume(150);
    std::cout << "New volume: " << fridge->_getVolume() << " litres" << std::endl;

    fridge->turnOn();
    std::cout << "Is fridge on? " << fridge->_isOn() << std::endl;

    fridge->turnOff();
    std::cout << "Is fridge on? " << fridge->_isOn() << std::endl;

    fridge->turnOn();
    std::cout << "Is fridge on? " << fridge->_isOn() << std::endl;

    std::cout << "Fridge power consumption: " << fridge->getPowerConsumption() << " watts" << std::endl;

    delete fridge;

    return 0;
}