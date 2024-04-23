#include "Fridge.h"

Fridge::Fridge() : Appliance() {
    volume = 0.0;
}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
    this->volume = volume;
}

double Fridge::_getVolume() {
    return volume;
}

void Fridge::_setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getPowerConsumption() {
    int powerRating = _getPowerRating();
    return powerRating * 24 * (volume / 100);
}