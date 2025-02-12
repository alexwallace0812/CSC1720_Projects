#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{
    Dog d1;
    d1.setBreed("Golden retriever");
    d1.setColor("Orange");
    d1.setPrice(120.35);
    cout << d1.getBreed() << endl << d1.getColor() << endl << d1.getPrice();
    return 0;
}