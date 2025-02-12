#include <iostream>
#include "Boat.h"
using namespace std;

Boat::Boat(double mFuel): Vehicle(mFuel)
{
    floating = true;
}
bool Boat::isFloating()
{
    return floating;
}
void Boat::setFloating(bool fl)
{
    floating = fl;
}
void Boat::showDash()
{
    cout << "Dashboard\n";
    cout << "Fuel: " << fuel << " Gallons - Distance: " << distance << " Miles - Floating: " << floating << endl;
}
void Boat::operate(double minutes, double speed)
{
    double distTraveled = (minutes*speed)/60;
    double fuelUsed = (minutes*speed)/1800;
    if(fuelUsed > fuel)
    {
        fuelUsed = fuel;
        minutes = (fuelUsed*1800)/speed;
        distTraveled = (minutes*speed)/60;
    }
    fuel -= fuelUsed;
    distance += distTraveled;
}