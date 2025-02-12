#include "Dog.h"
using namespace std;


double Dog::getPrice()
{
    return price;
}
void Dog::setPrice(double p)
{
    price = p;
}
string Dog::getBreed()
{
    return breed;
}
void Dog::setBreed(string b)
{
    breed = b;
}
string Dog::getColor()
{
    return color;
}
void Dog::setColor(string c)
{
    color = c;
}