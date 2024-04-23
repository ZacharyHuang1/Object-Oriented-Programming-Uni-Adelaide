#include <iostream>
#include "TV.h"

int main() {
    TV* tv = new TV(200, 55);

    std::cout << "Initial power rating: " << tv->_getPowerRating() << " watts" << std::endl;
    std::cout << "Initial screen size: " << tv->_getScreenSize() << " inches" << std::endl;

    tv->_setScreenSize(50);
    std::cout << "New screen size: " << tv->_getScreenSize() << " inches" << std::endl;

    tv->turnOn();
    std::cout << "Is TV on? " << tv->_isOn() << std::endl;

    tv->turnOff();
    std::cout << "Is TV on? " << tv->_isOn() << std::endl;

    tv->turnOn();
    std::cout << "Is TV on? " << tv->_isOn() << std::endl;

    std::cout << "TV power consumption: " << tv->getPowerConsumption() << " watts" << std::endl;

    delete tv;

    return 0;
}