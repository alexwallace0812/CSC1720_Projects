#include <iostream>
#include "Plane.h"
#include "Vehicle.h"
using namespace std;

Plane::Plane(double mFuel): Vehicle(mFuel)
{
    altitude = 0;
}
int Plane::getAltitude()
{
    return altitude;
}
void Plane::setAltitude(int al)
{
    altitude = al;
}
void Plane::showDash()
{
    cout << "Dashboard\n";
    cout << "Fuel: " << fuel << " Gallons - Distance: " << distance << " Miles - Altitude: " << altitude << " Feet" << endl;
}
void Plane::operate(double minutes, double speed)
{
    double distTraveled = (minutes*speed)/60;
    double fuelUsed = (minutes*speed)/720;
    if(fuelUsed > fuel)
    {
        fuelUsed = fuel;
        minutes = (fuelUsed*720)/speed;
        distTraveled = (minutes*speed)/60;
    }
    fuel -= fuelUsed;
    distance += distTraveled;
}