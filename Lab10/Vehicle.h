#include <iostream>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
    protected:
    double fuel;
    double distance;
    double maxFuel;


    public:
    Vehicle(double mFuel);
    void addFuel(double f);
    double getFuel();
    void setFuel(double f);
    double getDistance();
    void setDistance(double d);
    void showDash();
    virtual void operate(double minutes, double speed);
};
#endif