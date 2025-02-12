#include <iostream>
#include "IntList.h"
using namespace std;
int main()
{
    IntList list;
    cout << "List length = " << list.getLength() << endl;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    cout << "List length = " << list.getLength() << endl;
    cout << "Value at index 2 = " << list.get(2) << endl;
    list.add(6);
    list.add(7);
    list.add(8);
    list.add(9);
    cout << "List length = " << list.getLength() << endl;
    cout << "Value at index 7 = " << list.get(7) << endl;
    list.add(10);
    list.add(11);
    list.add(12);
    list.add(13);
    cout << "List length = " << list.getLength() << endl;
    cout << "Value at index 10 = " << list.get(10) << endl;
    list.remove(10);
    cout << "List length = " << list.getLength() << endl;
    cout << "Value at index 10 = " << list.get(10) << endl;
    list.remove(10);
    cout << "List length = " << list.getLength() << endl;
    cout << "Value at index 10 = " << list.get(10) << endl;
    return 0;
}