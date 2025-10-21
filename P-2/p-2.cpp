
/*2.Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans: 
operator1:  + 
operator2:  = 
*/

#include <iostream>
using namespace std;

bool isOperator(char x)
{
    if(x == '+' || x == '-' || x == '=' || x =='*')
    {
        return true;
    }    
    else
    {
        return false;
    } 

}

int main()
{
    string y;
    cout<<"Enter the expression: "<< endl;
    cin>>y;
    
    cout<<"Operators Found: "<<endl;
    for(int i=0; i < y.length(); i++)
    {
        if(isOperator(y[i]))
        {
            cout<<"Operator: "<<y[i]<<endl;
        }
    }
    return 0;
}