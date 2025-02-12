#include <iostream>
using namespace std;
#ifndef TREE_H
#define TREE_H
class Dog
{
    private:
    double price;
    string breed;
    string color;

    public:
    double getPrice();
    void setPrice(double p);
    string getBreed();
    void setBreed(string b);
    string getColor();
    void setColor(string c);
};

#endif