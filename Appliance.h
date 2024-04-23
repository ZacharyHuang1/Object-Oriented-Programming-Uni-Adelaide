#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();

    int _getPowerRating();
    void _setPowerRating(int powerRating);
    bool _isOn();

private:
    int powerRating;
    bool isOn;
};

#endif