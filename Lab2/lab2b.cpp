// File Name: Lab2b.cpp
// Programmer: Alex Wallace
// Course: CSC1720
// Date Submitted: January 23, 2024
// Location: /home/students/sstanley/csc1720/lab1/lab1c.cpp
// Description: This program takes in integers from a text file
// then adds them together and prints the outcome to the terminal
// Assistance: None
// Compile and Execute: g++ lab2b.cpp -o lab2b.out
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
    inFile.open("lab2bInput.txt");
    int a; 
    int b; 
    int c;
    inFile >> a;
    inFile >> b;
    // While loop to add the numbers and print out the output
    while(!inFile.eof())
    {
        c = a + b;
        cout << a << " + " << b << " = " << c << endl;
        inFile >> a;
        inFile >> b;
    }
    // Return statements
    return 0;
}
