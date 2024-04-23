#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();

    int get_PowerRating();
    void set_PowerRating(int powerRating);
    bool get_isOn();

private:
    int powerRating;
    bool isOn;
};

#endif