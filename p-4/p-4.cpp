#include <iostream>
#include <string>
using namespace std;

void checkIdentifier(string str)
{
    if (str.length() == 0)
    {
        cout << "Not an Identifier." << endl;
        return;
    }

    if (!((str[0] >= 'a' && str[0] <= 'z') ||
          (str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] == '_')))
    {
        cout << "Not an Identifier." << endl;
        return;
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              (str[i] == '_')))
        {
            cout << "Not an Identifier." << endl;
            return;
        }
    }

    cout << "Valid Identifier." << endl;
}

int main()
{
    string input;
    cout << "Enter input: ";
    cin >> input;
    checkIdentifier(input);
    return 0;
}
