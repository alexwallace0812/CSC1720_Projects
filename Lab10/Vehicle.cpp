#include <iostream>
#include "Vehicle.h"
using namespace std;


Vehicle::Vehicle(double mFuel)
{
    maxFuel = mFuel;
    fuel = 0;
    distance = 0;
}
void Vehicle::addFuel(double f)
{
    fuel = fuel + f;
    if(fuel >= maxFuel)
    {
        fuel = maxFuel;
    }
}
double Vehicle::getFuel()
{
    return fuel;
}
void Vehicle::setFuel(double f)
{
    fuel = f;
}
double Vehicle::getDistance()
{
    return distance;
}
void Vehicle::setDistance(double d)
{
    distance = d;
}
void Vehicle::showDash()
{
    cout << "Dashboard\n";
    cout << "Fuel: " << fuel << " - Distance: " << distance << endl;
}
void Vehicle::operate(double minutes, double speed)
{
    double distTraveled = (minutes*speed)/60;
    double fuelUsed = (minutes*speed)/1200;
    fuel -= fuelUsed;
    distance += distTraveled;
}