#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
public:
    Fridge();
    Fridge(int powerRating, double volume);

    double getVolume();
    void setVolume(double volume);

    double getPowerConsumption() override;

private:
    double volume;
};

#endif