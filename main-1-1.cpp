#include <iostream>
#include "Appliance.h"

int main() {
    Appliance* appliance = new Appliance(100);

    std::cout << "Initial power rating: " << appliance->_getPowerRating() << std::endl;
    appliance->_setPowerRating(200);
    std::cout << "New power rating: " << appliance->_getPowerRating() << std::endl;

    appliance->turnOn();
    std::cout << "Is appliance on? " << appliance->_isOn() << std::endl;

    appliance->turnOff();
    std::cout << "Is appliance on? " << appliance->_isOn() << std::endl;

    appliance->turnOn();
    std::cout << "Is appliance on? " << appliance->_isOn() << std::endl;

    delete appliance;

    return 0;
}