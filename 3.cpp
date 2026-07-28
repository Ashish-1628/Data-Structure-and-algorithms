#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string inp_str;
    bool isNumeric=true;
    bool isLowerCase=true;
    bool isUpperCase=true;
    cout<<"Enter a character :"<<endl;
    cin>>inp_str;
    for(char ch:inp_str)
    {
        if(!isdigit(ch))
        {
            isNumeric =false;
        }
        if(!isupper(ch))
        {
            isUpperCase=false;
        }
        if(!islower(ch))
        {
            isLowerCase = false;
        }
    }
    if(isNumeric)
    {
        cout<<"The string is Numeric"<<endl;
    }
    else if(isUpperCase)
    {
        cout<<"The string is Uppercase"<<endl;
    }
    else if(isLowerCase)
    {
        cout<<"The string is LowerCase"<<endl;
    }
    else
    {
        cout<<"The string is neither numeric,uppercase nor lowercase"<<endl;
    }
}
