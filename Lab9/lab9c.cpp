#include <iostream>
#include "Deck.h"
using namespace std;

int main()
{
    Deck deck1;
    deck1.shuffle();
    int bet, playerAmt = 100;
    string choice;
    while(true)
    {
        cout << "Welcome to a card game (not blackjack) highest sum wins" << endl;
        cout << "Want to play? y or n" << endl;
        cin >> choice;
        while(choice != "y" && choice != "n")
        {
            cout << "put in y or n loser" << endl;
            cin >> choice;
        }
        while(choice == "y")
        {
            Card pCard1 = deck1.draw();
            Card cCard1 = deck1.draw();
            Card pCard2 = deck1.draw();
            Card cCard2 = deck1.draw();
            Card pCard3 = deck1.draw();
            Card cCard3 = deck1.draw();
            int playerSum = pCard1.getValue() + pCard2.getValue() + pCard3.getValue();
            int compSum = cCard1.getValue() + cCard2.getValue() + cCard3.getValue();
            cout << "Place your bets (1 - 10)" << endl;
            cin >> bet;
            cout << "You drew a " + pCard1.getName() + ", a " + pCard2.getName() + ", and a " + pCard3.getName() << "." << endl;
            cout << "The computer drew a " + cCard1.getName() + ", a " + cCard2.getName() + ", and a " + cCard3.getName() << "." << endl;
            cout << "Your sum is " << playerSum << endl;
            cout << "The computer's sum is " << compSum << endl;
            if(playerSum == compSum)
            {
                cout << "It's a tie, dealer pushes, try again!" << endl;
            }
            else
            {
                if(playerSum > compSum)
                {
                    cout << "You won! You get your bet back" << endl;
                    playerAmt = playerAmt + bet;
                    cout << "You have " ;
                    cout << playerAmt;
                    cout << " dollars left to bet with." << endl;
                }
                if(playerSum < compSum)
                {
                    cout << "You lost loser! You lose your bet" << endl;
                    playerAmt = playerAmt-bet;
                    cout << "You have " ;
                    cout << playerAmt;
                    cout << " dollars left to bet with." << endl;
                }
            }
            cout << "Do you want to play again? (y or n)" << endl;
            cin >> choice;
            while(choice != "y" && choice != "n")
            {
                cout << "Input a valid choice" << endl;
                cin >> choice;
            }
        }
        if(choice == "n")
        {
            cout << "Ok see ya" << endl;
            break;
        }  
    }
    return 0;
}