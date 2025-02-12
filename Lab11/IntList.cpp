#include <iostream>
#include "IntList.h"
using namespace std;

IntList::IntList()
{
    max = 10;
    list = new int[max];
    length = 0;
}
IntList::~IntList()
{
    delete [] list;
}
int IntList::getLength()
{
    return length;
}
void IntList::add(int n)
{
    if(length >= max)
    {
        int newMax = max*2;
        int *newList = new int[newMax];
        for(int i = 0; i < length; i++)
        {
            newList[i] = list[i];
        }
        list = newList;
        delete[] newList;
        max = newMax;
    }
    list[length] = n;
    length++;
}
void IntList::remove(int index)
{
    for(int i = index; i < length-1; i++)
    {
        list[i] = list[(i+1)];
    }
    list[length] = 0;
    length--;
}
int IntList::get(int index)
{
    return list[index];
}