#include "House.h"

House::House() {
    numAppliances = 0;
    appliances = nullptr;
    currentCount = 0;
}

House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
    currentCount = 0;
}

House::~House() {
    for (int i = 0; i < currentCount; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentCount < numAppliances) {
        appliances[currentCount] = appliance;
        currentCount++;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double totalPower = 0.0;
    for (int i = 0; i < currentCount; i++) {
        totalPower += appliances[i]->getPowerConsumption();
    }
    return totalPower;
}