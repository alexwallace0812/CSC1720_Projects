#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
    for(int i = 0; i < 52; i++)
    {
        Card card1(i);
        cout << card1.getValue() << endl;
        cout << card1.getNumber() << endl;
        cout << card1.getSuit() << endl;
        cout << card1.getName() << endl;
    }
    return 0;
}
