#include <iostream>
#include "Contact.h"
using namespace std;

int main()
{
    Contact c1;
    c1.setfName("Alex");
    c1.setlName("Wallace");
    c1.setEmail("alexwallace0812@gmail.com");
    c1.setAddress("79 High Valley Drive");
    cout << c1.getfName() << endl << c1.getlName() << endl << c1.getEmail() << endl << c1.getAddress() << endl;
}