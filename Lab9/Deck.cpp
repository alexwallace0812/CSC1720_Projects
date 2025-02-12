#include <iostream>
#include "Deck.h"
#include <ctime>
using namespace std;

void Deck::shuffle()
{
    std::srand((unsigned)time(0)); 
    for(int i = 0; i < 5000; i++)
    {
        int index1 = rand() % 51, index2 = rand() % 51;
        Card temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }
}

Card Deck::draw()
{
    Card draw = card[top];
    top++;
    return draw;
}

Deck::Deck()
{
    for(int i = 0; i < 52; i++)
    {
        card[i] = Card(i);
    }
}