#include <iostream>
#include "Deck.h"
#include "Hand.h"
using namespace std;

Deck deck1;
Card pCard1;
Card dCard1;
Card pCard2;
Card dCard2;
Hand pHand;
Hand dHand;
int bet, playerAmt = 100, turn = 0;
string choice = "", choice2 = "";
void blackjackDeal()
{
    pCard1 = deck1.draw();
    dCard1 = deck1.draw();
    pCard2 = deck1.draw();
    dCard2 = deck1.draw();
    pHand.addCard(pCard1);
    pHand.addCard(pCard2);
    dHand.addCard(dCard1);
    dHand.addCard(dCard2);
}



int main()
{
    deck1.shuffle();
    cout << "*** Welcome to the Casino ***" << endl;
    while(playerAmt > 0 && choice !="n")
    {
        cout << "You have $" << playerAmt << ". Do you want to play BlackJack? (y or n)" << endl;
        cin >> choice;
        while(choice != "y" && choice != "n")
        {
            cout << "Please put in a valid input y or n" << endl;
            cin >> choice;
        }
        if(choice == "n")
        {
            break;
        }
        cout << "You have $" << playerAmt << ". How much do you want to bet? ";
        cin >> bet;
        cout << endl;
        blackjackDeal();
        pHand.printHand(true);
        cout << "Your hand is worth " << pHand.getHandValue() << endl;
        dHand.printHand(false);
        cout << "Would you like to (h)it or (s)tay?" << endl;
        cin >> choice2;
        while(choice2 != "h" && choice2 != "s")
        {
            cout << "Please put in a valid choice" << endl;
            cin >> choice2;
        }
        while(choice2 == "h")
        {
            pCard1 = deck1.draw();
            pHand.addCard(pCard1);
            pHand.printHand(true);
            cout << "Your hand is worth " << pHand.getHandValue();
            cout << "Would you like to (h)it or (s)tay?" << endl;
            cin >> choice2;
            while(choice2 != "h" && choice2 != "s")
            {
                cout << "Please put in a valid choice" << endl;
                cin >> choice2;
            }
        }
        dHand.printHand(true);
        while(dHand.getHandValue() <= 17)
        {
            dCard1 = deck1.draw();
            dHand.addCard(dCard1);
            dHand.printHand(true);
        }
    }
    return 0;
}