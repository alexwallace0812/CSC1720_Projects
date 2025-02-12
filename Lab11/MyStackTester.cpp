#include <iostream>
#include "MyStack.h"
using namespace std;
int main()
{
    MyStack<string> stack;
    cout << "List length = " << stack.getLength() << endl;
    stack.push("ALex");
    stack.push("Balex");
    stack.push("Calex");
    stack.push("Dalex");
    stack.push("Ealex");
    cout << "List length = " << stack.getLength() << endl;
    cout << "First string = " << stack.pop() << endl;
    stack.push("Falex");
    stack.push("Galex");
    stack.push("Halex");
    stack.push("Ialex");
    cout << "List length = " << stack.getLength() << endl;
    cout << "First string = " << stack.pop() << endl;
    stack.push("Jalex");
    cout << "added jalex" << endl;
    stack.push("Kalex");
    cout << "added Kalex" << endl;
    stack.push("Lalex");
    cout << "added Lalex" << endl;
    stack.push("Malex");
    cout << "added Malex" << endl;
    cout << "List length = " << stack.getLength() << endl;
    cout << "First string = " << stack.pop() << endl;
    cout << "First string = " << stack.pop() << endl;
    cout << "First string = " << stack.pop() << endl;
    return 0;
}