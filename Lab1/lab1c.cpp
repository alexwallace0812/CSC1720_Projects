// File Name: Lab1c.cpp
// Programmer: Alex Wallace
// Course: CSC1720
// Date Submitted: January 16, 2024
// Location: /home/students/sstanley/csc1720/lab1/lab1c.cpp
// Description: This program prompts the user to enter hourly pay 
// and how much they work in a week then calculates a bunch of different
// values of the total money
// Assistance: Mark Marksalot helped me with my opening comment
// Compile and Execute: g++ lab1c.cpp -o lab1c.out
// Additional files: None

// Include statements
#include <iostream>
#include <iomanip>
using namespace std;
// Main function
int main()
{
    // setting up variables
    double pay = 0;
    double hours = 0;
    double weeks = 5.00;
    double tax = .14;
    double clothes = .1;
    double schoolSupplies = .03;
    double bonds = .25;
// Basic input
    cout << "How much money do you get per hour? ";
    cin >> pay;
    cout << "How many hours do you work per week? ";
    cin >> hours;
//Setting up variables for calculations
    double tot = 0;
    double taxmoney = 0;
    double taxAmt = 0;
    double afterTax = 0;
    double clothesMoney = 0;
    double afterClothes = 0;
    double supplyMoney = 0;
    double afterSupply = 0;
    double bondsMoney = 0;
    double momBonds = 0;
    double afterBonds = 0;
// Calculations
    tot = weeks * hours * pay;
    taxAmt = tot * tax;
    afterTax = tot - taxAmt;
    clothesMoney = afterTax * clothes;
    afterClothes = afterTax - clothesMoney;
    supplyMoney = afterClothes * schoolSupplies;
    afterSupply = afterClothes - supplyMoney;
    bondsMoney = afterSupply * bonds;
    momBonds = bondsMoney * 1.5;
    afterBonds = afterSupply - bondsMoney;
// Calculation outputs
    cout << setprecision(2) << fixed << showpoint;
    cout << "You will make $" << tot << " over the 5 weeks of summer" << "\n";
    cout << "After taxes, you will be left with $" << afterTax << "." << "\n";
    cout << "You decide to set aside $" << clothesMoney << " for clothes this month." << "\n";
    cout << "You will also save $" << supplyMoney << " for school supplies." << "\n";
    cout << "After clothes and supplies, you will invest $" << bondsMoney << " into stocks." << "\n";
    cout << "Your parents help with your investment and you will invest $" << momBonds << "." << "\n";
    cout << "After everything you spent, you will be left with $" << afterBonds << " to spend." << "\n";
    
    return 0;
}
