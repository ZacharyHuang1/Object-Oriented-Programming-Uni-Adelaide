#include <iostream>
#include "TV.h"

int main() {
    TV tv(200, 55);

    std::cout << "TV power rating: " << tv.get_powerRating() << " watts" << std::endl;
    std::cout << "TV screen size: " << tv.getScreenSize() << " inches" << std::endl;

    tv.turnOn();
    std::cout << "TV is on: " << tv.get_isOn() << std::endl;

    std::cout << "TV power consumption: " << tv.getPowerConsumption() << " watts" << std::endl;

    return 0;
}