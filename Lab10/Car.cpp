#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(double mFuel):Vehicle(mFuel)
{
    tirePressure = 0;
}
double Car::getTirePressure()
{
    return tirePressure;
}
void Car::setTirePressure(double p)
{
    tirePressure = p;
}
void Car::showDash()
{
    cout << "Dashboard\n";
    cout << "Fuel: " << fuel << " Gallons - Distance: " << distance << " Miles - Tire Pressure: " << tirePressure << " psi" << endl;
}
void Car::operate(double minutes, double speed)
{
    double distTraveled = (minutes*speed)/60;
    double fuelUsed = (minutes*speed)/1200;
    if(fuelUsed > fuel)
    {
        fuelUsed = fuel;
        minutes = (fuelUsed*1200)/speed;
        distTraveled = (minutes*speed)/60;
    }
    fuel -= fuelUsed;
    distance += distTraveled;
}