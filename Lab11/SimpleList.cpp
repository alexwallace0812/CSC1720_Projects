#include <iostream>
#include "SimpleList.h"
using namespace std;

template <class T>
SimpleList<T>::SimpleList(int m)
{
    max = m;
    list = new T[max];
    length = 0;
}
template <class T>
SimpleList<T>::~SimpleList()
{
    delete [] list;
}
template <class T>
int SimpleList<T>::getLength()
{
    return length;
}
template <class T>
void SimpleList<T>::add(T n)
{
    list[length] = n;
    length++;
}
template <class T>
T SimpleList<T>::get(int index)
{
    return list[index];
}