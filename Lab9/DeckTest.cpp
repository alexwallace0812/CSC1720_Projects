#include <iostream>
#include "Deck.h"
using namespace std;

int main()
{
    Deck deck1;
    deck1.shuffle();
    Card card1 = deck1.draw();
    cout << card1.getName();
    return 0;
}