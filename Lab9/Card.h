#include <iostream>
using namespace std;
#ifndef CARD_H
#define CARD_H

class Card
{
    private:
    int id;

    public:
    Card(int i = 0);
    string getNumber();
    string getSuit();
    string getName();
    int getValue();
    int getBlackjackValue(int a);
};

#endif
