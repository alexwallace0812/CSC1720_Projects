#include <iostream>
#include "IntQueue.h"
using namespace std;

IntQueue::IntQueue()
{
    max = 10;
    list = new int[max];
    length = 0;
}
IntQueue::~IntQueue()
{
    delete [] list;
}
int IntQueue::getLength()
{
    return length;
}
void IntQueue::add(int n)
{
    if(length >= max-1)
    {
        int newMax = max*2;
        int *newList = new int[newMax];
        for(int i = 0; i < length; i++)
        {
            newList[i] = list[i];
        }
        delete[] list;
        list = newList;
        max = newMax;
    }
    list[length] = n;
    length++;
}
int IntQueue::poll()
{
    int poller = list[0];
    for(int i = 0; i < length-1; i++)
    {
        list[i] = list[(i+1)];
    }
    length--;
    return poller;
}