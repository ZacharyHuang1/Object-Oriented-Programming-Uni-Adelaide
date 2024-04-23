#include "TV.h"

TV::TV() : Appliance() {
    screenSize = 0.0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getPowerConsumption() {
    int powerRating = get_powerRating();
    return powerRating * (screenSize / 10);
}