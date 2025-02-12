#include <iostream>
#include "Vehicle.h"
using namespace std;

#ifndef BOAT_H
#define BOAT_H

class Boat : public Vehicle
{
    private:
    bool floating;

    public:
    Boat(double mFuel);
    bool isFloating();
    void setFloating(bool fl);
    void showDash();
    void operate(double minutes, double speed);
};

#endif