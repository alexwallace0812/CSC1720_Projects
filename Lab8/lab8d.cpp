#include <iostream>
#include "Dictionary.h"
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

Dictionary d1;
string word, guess;
int lives = 3;
void loadWords()
{
    string temp;
    ifstream inFile;
    inFile.open("wordbank5.txt");
    for(int i = 0; i < 3103; i++)
    {
        inFile >> temp;
        d1.loadWords(temp, i);
    }
}
void mixUpLetters()
{

    string letters[5];
    for(int i = 0; i < 5; i++)
    {
        letters[i] = word[i];
    }
    std::srand((unsigned)time(0)); 
    for(int i = 0; i < 100; i++)
    {
        int index1 = rand() % 5, index2 = rand() % 5;
        string temp = letters[index1];
        letters[index1] = letters[index2];
        letters[index2] = temp;
    }
    cout << letters[0] << " " << letters[1] << " " << letters[2] << " " << letters[3] << " " << letters[4] << endl;
}

int main()
{
    loadWords();
    word = d1.getWord();
    cout << "Welcome to wordle!" << endl;
    cout << "Your word has the letters: ";
    mixUpLetters();
    cout << "The third letter is " << word[2] << endl;
    cout << "You have three attempts left" << endl;
    while(lives > 0)
    {
    cout << "What is your guess? " << endl;
    cin >> guess;
    if(d1.checkWord(guess))
    {
        cout << "That is a word! You win!" << endl;
    }
    else
    {
        lives--;
        if(guess.length() != 5)
        {
            cout << "That is not a five letter word" << endl;
        }
        if(!d1.checkWord(guess))
        {
            cout << "That is not a word" << endl;
        }
        if(guess[2] != word[2])
        {
            cout << "The letter " << word[2] << " is not used in the right place" << endl;
        }
    if(lives == 2)
    {
        cout << "You have two attempts left" << endl;
    }
    else
    {
        cout << "You have one attempt left" << endl;
    }    
    }
    }
    if(lives == 0)
    {
        cout << "You lost!";
    }
    return 0;
}