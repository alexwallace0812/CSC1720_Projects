#include <iostream>
#include "Card.h"
using namespace std;
#ifndef DECK_H
#define DECK_H
class Deck
{
    private:
    Card card[52];
    int top = 0;

    public:
    Deck();
    void shuffle();
    Card draw();
};
#endif