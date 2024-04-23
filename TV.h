#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
public:
    TV();
    TV(int powerRating, double screenSize);

    double _getScreenSize();
    void _setScreenSize(double screenSize);

    double getPowerConsumption() override;

private:
    double screenSize;
};

#endif