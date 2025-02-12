#include <iostream>
#include "IntStack.h"
using namespace std;

IntStack::IntStack()
{
    max = 10;
    list = new int[max];
    length = 0;
}
IntStack::~IntStack()
{
    delete [] list;
}
int IntStack::getLength()
{
    return length;
}
void IntStack::push(int n)
{
    if(length >= max-1)
    {
        int newMax = max*2;
        int *newList = new int[newMax];
        for(int i = 0; i < length; i++)
        {
            newList[i] = list[i];
        }
        delete[] newList;
        list = newList;
        max = newMax;
    }
    for(int i = length; i >= 0; i--)
    {
        list[(i+1)] = list[i];
    }
    list[0] = n;
    length++;
}
int IntStack::pop()
{
    int popper = list[0];
    for(int i = 0; i < length-1; i++)
    {
        list[i] = list[(i+1)];
    }
    length--;
    return popper;
}