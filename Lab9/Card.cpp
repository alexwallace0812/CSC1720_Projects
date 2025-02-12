#include <iostream>
#include "Card.h"
using namespace std;

string Card::getNumber()
{
    int num = id%13;
    switch(num)
    {
        case 0:
            return "Ace";
        case 1:
            return "2";
        case 2:
            return "3";
        case 3:
            return "4";
        case 4:
            return "5";
        case 5:
            return "6";
        case 6:
            return "7";
        case 7:
            return "8";
        case 8:
            return "9";
        case 9:
            return "10";
        case 10:
            return "Jack";
        case 11:
            return "Queen";
        case 12:
            return "King";
        default:
            break;   
    }
    return "Error";
}

string Card::getSuit()
{
    int suit = id/13;

    switch (suit)
    {
        case 0:
            return "Clubs";
        case 1:
            return "Diamonds";
        case 2:
            return "Hearts";
        case 3:
            return "Spades";
        default:
            break;
    }
    return "Error";
}

string Card::getName()
{
    string output = getNumber() + " of " + getSuit();
    return output;
}

int Card::getValue()
{
    int value = id%13;
    if(value == 0)
    {
        value = 14;
        return value;
    }
    else
    {
        value++;
        return value;
    }
    return value;
}
int Card::getBlackjackValue(int a)
{
    int value = id%13;
    if(value == 0)
    {
        if(a+11 <= 21)
        {
            value = 11;
            return value;
        }
        else
        {
            value++;
            return value;
        }
    }
    else
    {
        value++;
        return value;
    }
    return value;
}
Card::Card(int i)
{
    id = i;
}