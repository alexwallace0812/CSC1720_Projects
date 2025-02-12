#include <iostream>
using namespace std;
#ifndef INTLIST_H
#define INTLIST_H

class IntList
{
    private:
    int* list;
    int max;
    int length;

    public:
    IntList();
    ~IntList();
    int getLength();
    void add(int n);
    void remove(int index);
    int get(int index);
};

#endif