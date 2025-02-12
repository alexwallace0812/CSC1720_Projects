#include <iostream>
#include "Vehicle.h"
using namespace std;
#ifndef CAR_H
#define CAR_H

class Car : public Vehicle
{
    protected:
    double tirePressure;
    double carFuel;
    double carDistance;

    public:
    Car(double mFuel);
    double getTirePressure();
    void setTirePressure(double p);
    void showDash();
    void operate(double minutes, double speed) override;
};

#endif
