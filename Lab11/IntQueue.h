#include <iostream>
using namespace std;
#ifndef INTSTACK_H
#define INTSTACK_H

class IntQueue
{
    private:
    int *list;
    int max;
    int length;

    public:
    IntQueue();
    ~IntQueue();
    int getLength();
    void add(int n);
    int poll();
};
#endif