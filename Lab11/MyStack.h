#include <iostream>
using namespace std;
#ifndef MYSTACK_H
#define MYSTACK_H

template <class T>
class MyStack
{
    private:
    T *list;
    int max;
    int length;

    public:
    MyStack()
    {
        max = 10;
        list = new T[max];
        length = 0;
    };
    ~MyStack()
    {   
        delete [] list;
    };
    int getLength()
    {
        return length;
    };
    void push(T n)
    {
    if(length >= (max-1))
    {
        int newMax = max*2;
        T *newList = new T[newMax];
        for(int i = 0; i < length; i++)
        {
            newList[i] = list[i];
        }
        delete [] list;
        list = newList;
        max = newMax;
    }
    for(int i = length; i >= 0; i--)
        {
            list[(i+1)] = list[i];
        }
        list[0] = n;
        length++;
    };
    T pop()
    {
        T popper = list[0];
        for(int i = 0; i < length-1; i++)
        {
            list[i] = list[(i+1)];
        }
        length--;
        return popper;
    };
};
#endif