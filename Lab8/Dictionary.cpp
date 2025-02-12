#include "Dictionary.h"
#include <cstdlib>
#include <ctime>
using namespace std;

void Dictionary::loadWords(string o, int a)
{
    words[a] = o;
}
string Dictionary::getWord()
{
    srand((unsigned)time(0)); 
    int index = rand() % 3103;
    string word = words[index];
    return word;
}

bool Dictionary::checkWord(string p)
{
    for(int i = 0; i < 3103; i++)
    {
        if(p == words[i])
        {
            return true;
        }
    }
    return false;
}