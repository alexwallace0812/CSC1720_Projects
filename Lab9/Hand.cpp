#include <iostream>
#include "Hand.h"
using namespace std;

void Hand::addCard(Card c)
{
    cards[numOfCards] = c;
    numOfCards++;
}
int Hand::getHandValue()
{
    int tot;
    for(int i = 0; i < numOfCards; i++)
    {
        tot = tot + cards[i].getValue();
    }
    return tot;
}
void Hand::printHand(bool showAll)
{
    if(turn == 1)
    {
        cout << "Dealer hand:\n";
        turn = 0;
    }
    if(turn == 0)
    {
        cout << "Your hand:\n";
        turn = 1;
    }
    if(showAll)
    {
        for(int i = 0; i < numOfCards; i++)
        {
            cout << cards[i].getName() << endl;
        }
    }
    else
    {
        cout << "HIDDEN" << endl;
        for(int i = 1; i < numOfCards; i++)
        {
            cout << cards[i].getName() << endl;
        }
    }
}
void Hand::clear()
{
    numOfCards = 0;
}
