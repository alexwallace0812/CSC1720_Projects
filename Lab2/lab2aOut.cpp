 // File Name: Lab1c.cpp
  2 // Programmer: Alex Wallace
  3 // Course: CSC1720
  4 // Date Submitted: January 16, 2024
  5 // Location: /home/students/sstanley/csc1720/lab1/lab1c.cpp
  6 // Description: This program prompts the user to enter hourly pay
  7 // and how much they work in a week then calculates a bunch of different
  8 // values of the total money
  9 // Assistance: Mark Marksalot helped me with my opening comment
// Compile and Execute: g++ lab1c.cpp -o lab1c.out
// Additional files: None
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    int a; 
    int b; 
    int c;
    
    cout << "Please input an integer: ";
    cin >> a;
    cout << "Input one more integer: ";
    cin >> b;
    c = a + b;
    cout << "The sum of the numbers is " << c;

    return 0;
}
