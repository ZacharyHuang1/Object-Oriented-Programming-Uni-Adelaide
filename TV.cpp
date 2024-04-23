#include "TV.h"

TV::TV() : Appliance() {
    screenSize = 0.0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize;
}

double TV::_getScreenSize() {
    return screenSize;
}

void TV::_setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getPowerConsumption() {
    int powerRating = _getPowerRating();
    return powerRating * (screenSize / 10);
}