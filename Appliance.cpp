#include "Appliance.h"

Appliance::Appliance() {
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

int Appliance::get_PowerRating() {
    return powerRating;
}

void Appliance::set_PowerRating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::get_isOn() {
    return isOn;
}