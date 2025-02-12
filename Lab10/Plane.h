#include <iostream>
#include "Vehicle.h"
using namespace std;
#ifndef PLANE_H
#define PLANE_H

class Plane : public Vehicle
{
    private:
    int altitude;

    public:
    Plane(double mFuel);
    int getAltitude();
    void setAltitude(int al);
    void showDash();
    void operate(double minutes, double speed);
};

#endif