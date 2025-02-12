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
#include <fstream>
using namespace std;

// Main function
int main()
{
    // Setting up file variables
    ifstream inFile;
    inFile.open("lab2aInput.txt");
    int a; 
    int b; 
    int c;
    // Printing outcomes
    cout << "Input your first integer: ";
    inFile >> a;
    cout << "Input your second integer: ";
    inFile >> b;
    c = a + b;
    cout << "The sum is " << c;
    // Return statement
    return 0;
}
