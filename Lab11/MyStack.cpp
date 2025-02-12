#include <iostream>
#include "MyStack.h"
using namespace std;

template <class T>
MyStack<T>::MyStack()
{
    max = 10;
    list = new T[max];
    length = 0;
}

template <class T>
MyStack<T>::~MyStack()
{
    delete [] list;
}

template <class T>
int MyStack<T>::getLength()
{
    return length;
}

template <class T>
void MyStack<T>::push(T n)
{
    if(length >= max)
    {
        int newMax = max*2;
        T *newList = new T[newMax];
        for(int i = 0; i < length; i++)
        {
            newList[i] = list[i];
        }
        list = newList;
        delete[] newList;
        max = newMax;
    }
    for(int i = length; i >= 0; i--)
    {
        list[(i+1)] = list[i];
    }
    list[0] = n;
    length++;
}

template <class T>
T MyStack<T>::pop()
{
    T popper = list[0];
    for(int i = 0; i < length-1; i++)
    {
        list[i] = list[(i+1)];
    }
    list[length] = "";
    length--;
    return popper;
}