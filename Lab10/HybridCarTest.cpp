// HybridCarTest.cpp
#include "HybridCar.h"
#include <iostream>
using namespace std;
int main()
{
cout << "Test 1: Create car. It holds 10G and 20kWh.\n";
cout << "Give it 8 gallons of gas, 15 kWh of charge,\n";
cout << "and fill the tires.\n";
HybridCar wheels(10, 20);
wheels.setTirePressure(35);
wheels.addFuel(8);
wheels.addCharge(15);
wheels.showDash();
cout << "\nTest 2: Drive using up only some charge.\n";
wheels.operate(30, 60);
wheels.showDash();
cout << "\nTest 3: Drive using up all charge and some gas.\n";
wheels.operate(60, 60);
wheels.showDash();
cout << "\nTest 4: Drive using up all charge, all gas,\n";
cout << "and some of the charge from recharging.\n";
wheels.operate(100, 60);
wheels.showDash();
cout << "\nTest 5: Drive using up everything.\n";
wheels.operate(300, 60);
wheels.showDash();
return 0;
}