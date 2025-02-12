#include <iostream>
#include <iomanip>
#include "Contact.h"
#include <c++/10/iomanip>
using namespace std;

Contact friendsList[100];
int choice = 0, numOfContacts = 0, count = 0;
string temp;
void listAllContacts()
{
    cout << setw(20) << left << "First Name" <<setw(20) <<  left << "Last Name" << setw(30) << left << "Email Address" << setw(30) << left << "Address" << endl;
    for(int i = 0; i < 100; i++)
    {
        cout << "_";
    }
    cout << endl;
    for(int i = 0; i < numOfContacts; i++)
    {
        cout << setw(20) << left << friendsList[i].getfName() << setw(20) << left << friendsList[i].getlName() << setw(30) << left << friendsList[i].getEmail() << setw(30) << left << friendsList[i].getAddress() << endl;
    }
}
Contact addNewContact()
{
    cout << "First name: ";
    cin >> temp;
    friendsList[numOfContacts].setfName(temp);
    cout << "Last Name: ";
    cin >> temp;
    friendsList[numOfContacts].setlName(temp);
    cout << "Email Address: ";
    cin >> temp;
    friendsList[numOfContacts].setEmail(temp);
    cout << "Address: ";
    cin >> temp;
    friendsList[numOfContacts].setAddress(temp);
    numOfContacts++;
    return friendsList[numOfContacts - 1];
}
void sortByLastName()
{
    for(int i = 0; i < numOfContacts; i++)
    {
        string min = friendsList[i].getlName();
        int index = i;

        for(int j = i + 1; j < numOfContacts; j++)
        {
            if(friendsList[j].getlName() < min)
            {
                min = friendsList[j].getlName();
                index = j;
            }
        }
        Contact timp = friendsList[i];
        friendsList[i] = friendsList[index];
        friendsList[index] = timp;
    }
    listAllContacts();
}
void findByLastName()
{
    Contact tempList[100];
    string temp;
    cout << "Please enter the last name your want to search for: ";
    cin >> temp;
    for(int i = 0; i < numOfContacts; i++)
    {
        if(temp == friendsList[i].getlName())
        {
            tempList[count] = friendsList[i];
        }
    }
    cout << setw(20) << left << "First Name" <<setw(20) <<  left << "Last Name" << setw(30) << left << "Email Address" << setw(30) << left << "Address" << endl;
    for(int i = 0; i < 100; i++)
    {
        cout << "_";
    }
    cout << endl;
    for(int i = 0; i < numOfContacts; i++)
    {
        cout << setw(20) << left << tempList[i].getfName() << setw(20) << left << tempList[i].getlName() << setw(30) << left << tempList[i].getEmail() << setw(30) << left << tempList[i].getAddress() << endl;
    }
}

int main()
{
    while(true)
    {
        choice = 1;
        cout << "Your options are:\n(1) List all contacts unsorted\n(2) Add a new contact\n(3) Sort and list all contacts by last name\n(4) Find and list all contacts by last name\nWhat would you like to do? ";
        cin >> choice;
        while(choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Please input a valid choice";
            cin >> choice;
        }
        if(choice == 1)
        {
            listAllContacts();
        }
        if(choice == 2)
        {
            addNewContact();
        }
        if(choice == 3)
        {
            sortByLastName();
        }
        if(choice == 4)
        {
            findByLastName();
        }
    }
    return 0;
}