#include <iostream>
using namespace std;
#ifndef TREE_H
#define TREE_H
class Contact
{
    private:
    string fName;
    string lName;
    string eMail;
    string address;

    public:
    string getfName();
    void setfName(string a);
    string getlName();
    void setlName(string b);
    string getEmail();
    void setEmail(string c);
    string getAddress();
    void setAddress(string d);
};

#endif