//1.Write a program to determine whether the Given Input is Numeric Constant or Not. e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).

#include<iostream>
using namespace std;

bool isNumeric(string x)
{
    for(int i= 0; i < x.length(); i++)
    {
        if(x[i] < 48 || x[i] > 9)
        {
            return false; 
        }

     return true;   
    }
}

int main()
{
    string y;
    cout<<"Enter input: ";
    cin>>y;

    if(isNumeric(y))
    {
        cout<< "numeric constant";

    }

    else 
    {
        cout<< "not numeric";
    }

    return 0;

}