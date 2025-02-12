#include <iostream>
#include "IntQueue.h"
using namespace std;
int main()
{
    IntQueue queue;
    cout << "List length = " << queue.getLength() << endl;
    queue.add(1);
    queue.add(2);
    queue.add(3);
    queue.add(4);
    queue.add(5);
    cout << "List length = " << queue.getLength() << endl;
    cout << "First value = " << queue.poll() << endl;
    queue.add(6);
    queue.add(7);
    queue.add(8);
    queue.add(9);
    cout << "List length = " << queue.getLength() << endl;
    cout << "First value = " << queue.poll() << endl;
    queue.add(10);
    queue.add(11);
    queue.add(12);
    queue.add(13);
    cout << "List length = " << queue.getLength() << endl;
    cout << "First value = " << queue.poll() << endl;
    cout << "First value = " << queue.poll() << endl;
    cout << "First value = " << queue.poll() << endl;
    return 0;
}