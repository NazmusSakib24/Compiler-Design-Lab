#include<iostream>
#include<string>
using namespace std;

void chkComment(string x)
{
    if (x.length() >= 2 && x[0] == '/' && x[1] == '/')
    {
        cout<<"Sinlge Line Comment."<<endl;
        cout<<"Commented Line: "<<x.substr(2)<<endl;
    }

    else if (x.length() >= 4 && x[0] == '/' && x[1] == '*' && x[x.length()-2])
    {
        cout << "Multiple Line Comment."<<endl;
        cout << "Commented text: "<<x.substr(2,x.length()-4) << endl;
    }

    else 
    {
        cout << "Not a comment" << endl;
    }

}

int main()
{
    string y;
    cout<< "Enter text: ";
    getline(cin,y);

    chkComment(y);
    return 0;
}