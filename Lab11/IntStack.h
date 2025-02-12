#include <iostream>
using namespace std;
#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
    private:
    int *list;
    int max;
    int length;

    public:
    IntStack();
    ~IntStack();
    int getLength();
    void push(int n);
    int pop();
};
#endif