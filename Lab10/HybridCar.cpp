#include <iostream>
#include "HybridCar.h"
using namespace std;

HybridCar::HybridCar(double mFuel, double mCharge):Car(mFuel)
{
    maxCharge = mCharge;
}
void HybridCar::addCharge(double ch)
{
    charge += ch;
}
void HybridCar::showDash()
{
    cout << "Dashboard\n";
    cout << "Fuel: " << fuel << " Gallons - Distance: " << distance << " Miles - Charge: " << charge << " kWh - Tire Pressure: " << tirePressure << " psi" << endl;
}
void HybridCar::operate(double minutes, double speed) 
{
    double rDist = minutes*speed/60;
    double mDist = charge*3;
    if(rDist >= mDist)
    {
        charge = 0;
        setDistance(getDistance()+mDist);
        rDist -= mDist;
    }
    else
    {
        setDistance(getDistance()+rDist);
        rDist = 0;
        double chargeUsed = minutes*speed/(60*3);
        charge -= chargeUsed;
    }
    if(rDist > 0)
    {
        mDist = getFuel()*20;
        if (rDist >= mDist)
        {
            setDistance(getDistance()+mDist);
            setFuel(0);
            rDist -= mDist;
            charge += mDist*0.1;
        }
        else
        {
            setDistance(getDistance()+rDist);
            double fuelUsed = minutes*speed/1200;
            setFuel(getFuel()-fuelUsed);
            charge += rDist*0.1;
            rDist = 0;
        }

    }
    if(rDist > 0)
    {
        if(rDist >= mDist)
        {
            charge = 0;
            setDistance(getDistance()+mDist);
            rDist -= mDist;
        }
        else
        {
            setDistance(getDistance()+rDist);
            rDist = 0;
            double chargeUsed = rDist/3;
            charge -= chargeUsed;
        }
    }
    
}