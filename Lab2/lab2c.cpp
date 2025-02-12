// File Name: Lab2c.cpp
// Programmer: Alex Wallace
// Course: CSC1720
// Date Submitted: January 23, 2024
// Location: /home/students/sstanley/csc1720/lab1/lab1c.cpp
// Description: This program takes in names and pay from an
// input file then calculates new pay and prints the results
// in a neat table to the terminal and output file
// Assistance: None
// Compile and Execute: g++ lab2c.cpp -o lab2c.out
// Additional files: None 

// Include statements
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Main function
int main()
{
    // Setting up variables
    ifstream inFile;
    ofstream outFile;
    inFile.open("lab2cInput.txt");
    outFile.open("lab2cOutput.txt");
    // Printing the beginning of the table
    cout << setw(12) << left << "Last" << setw(12) << left << "First";
    cout << setw(14) << left << "Old Pay" << setw(14) << left << "New Pay" << endl;
    cout << "________    " << "________    " << "__________    " << "__________    " << endl;
    outFile << setw(12) << left << "Last" << setw(12) << left << "First";
    outFile << setw(14) << left << "Old Pay" << setw(14) << left << "New Pay" << endl;
    outFile << "________    " << "________    " << "__________    " << "__________    " << endl;
    // Setting up the name and pay variables
    string firstName = "";
    string lastName = "";
    double oldPay = 0; 
    double newPay = 0;
    double raise = 1.08;
    // While loop
    inFile >> firstName;
    inFile >> lastName;
    inFile >> oldPay;
    while(!inFile.eof())
    {
        // Print and calculating the pay and names
        newPay = oldPay * raise;
        cout << setw(12) << left << lastName + "," << setw(12) << left << firstName;
        cout << setw(10) << right << showpoint << fixed << setprecision(2) << oldPay;
        cout << setw(14) << right << showpoint << fixed << setprecision(2) << newPay << endl;
        outFile << setw(12) << left << lastName + "," << setw(12) << left << firstName;
        outFile << setw(10) << right << showpoint << fixed << setprecision(2) << oldPay; 
        outFile << setw(14) << right << showpoint << fixed << setprecision(2) << newPay << endl;
        inFile >> firstName;
        inFile >> lastName;
        inFile >> oldPay;
    }

// Return statement
    return 0;
}
