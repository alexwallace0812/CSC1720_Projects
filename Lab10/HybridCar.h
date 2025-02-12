#include <iostream>
#include "Car.h"
using namespace std;
#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

class HybridCar : public Car
{
    private:
    double charge;
    double maxCharge;


    public:
    HybridCar(double mFuel, double mCharge);
    void addCharge(double ch);
    void showDash();
    void operate(double minutes, double speed) override;

};

#endif
