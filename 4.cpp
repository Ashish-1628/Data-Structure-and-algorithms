#include<iostream>
using namespace std;
int main(){
    //+ve & -ve numbers
    /*int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    if(n>0){
        cout<<"Value of n is +ve"<<endl;
    }
    else if(n==0){
        cout<<"n is Zero"<<endl;
    }
    else{
        cout<<"value of n is -ve"<<endl;
    }*/
   //Two number comparsion
   /*int a,b;
   cout<<"Enter value of a & b"<<endl;
   cin>>a;
   cin>>b;
   if(a>b){
        cout<<"a is greater than b"<<endl;
   }
   else{
        cout<<"b is greater than a"<<endl;
   }*/
  //Uppercase,Lowercase or Numeric
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