#include "Appliance.h"

Appliance::~Appliance() {
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}

int Appliance::_getPowerRating() {
    return powerRating;
}

void Appliance::_setPowerRating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::_isOn() {
    return isOn;
}