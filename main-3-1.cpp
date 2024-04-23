#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House house(3);

    Fridge* fridge = new Fridge(500, 300);
    TV* tv = new TV(200, 55);
    Appliance* ac = new Appliance(1000);

    house.addAppliance(fridge);
    house.addAppliance(tv);
    house.addAppliance(ac);

    double totalPower = house.getTotalPowerConsumption();
    std::cout << "Total power consumption: " << totalPower << " watts" << std::endl;

    delete fridge;
    delete tv;
    delete ac;

    return 0;
}