#include <iostream>
using namespace std;
#ifndef DICTIONARY_H
#define DICTIONARY_H
class Dictionary
{
    private:
    string words[3103];
    int size = 3103;

    public:
    void loadWords(string o, int a);
    string getWord();
    bool checkWord(string p);
};
#endif