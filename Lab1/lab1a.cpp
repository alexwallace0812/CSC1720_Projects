// File Name: Lab1a.cpp
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
// Main functions
int main()
{
    // variable setup
    double pay = 0;
    double hours = 0;
    double weeks = 10;
    // Input
    cout << "How much money do you get per hour? ";
    cin >> pay;
    cout << "How many hours do you work per week? ";
    cin >> hours;
    //Variables for calculations and calculations
    double tot = 0;
    tot = weeks * hours * pay;
    cout << fixed << setprecision(2) << showpoint << "You will make " << tot << " dollars over the 10 weeks of summer" << "\n";
    return 0;
}

