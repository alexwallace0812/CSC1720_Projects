#include <iostream>
#include "Deck.h"
using namespace std;
#ifndef HAND_H
#define HAND_H
class Hand
{
    private:
    Card cards[5];
    int numOfCards = 0, turn;

    public:
    void addCard(Card c);
    int getHandValue();
    void printHand(bool showAll);
    void clear();
};


#endif