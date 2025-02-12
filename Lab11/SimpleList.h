#include <iostream>
using namespace std;

template <class T>
class SimpleList
{
    private:
    T* list;
    int max;
    int length;

    public:
    SimpleList(int m);
    ~SimpleList();
    int getLength();
    void add(T n);
    T get(int index);
};