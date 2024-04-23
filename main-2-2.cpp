#include <iostream>
#include "TV.h"

int main() {
    TV tv(200, 55);

    std::cout << "TV power rating: " << tv._getPowerRating() << " watts" << std::endl;
    std::cout << "TV screen size: " << tv._getScreenSize() << " inches" << std::endl;

    tv.turnOn();
    std::cout << "TV is on: " << tv._isOn() << std::endl;

    std::cout << "TV power consumption: " << tv.getPowerConsumption() << " watts" << std::endl;

    return 0;
}