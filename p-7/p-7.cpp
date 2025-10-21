#include <iostream>
#include <string>
using namespace std;

string getFullName(string first, string last)
{
    return first + " " + last;
}

int main()
{
    string firstName, lastName;
    cout<< "Enter first name: ";
    cin>> firstName;
    cout<< "Enter last name: ";
    cin>> lastName;

    string fullName = getFullName(firstName, lastName);
    cout << "Full name = " << fullName << endl;

    return 0;
}
