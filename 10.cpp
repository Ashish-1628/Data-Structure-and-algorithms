//Write a program to get number of notes required to display particular amount
#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter an amount :";
    cin>>amount;
    int x=0,y=0,z=0,a=0;
    x=amount/100;
    amount=amount-x*100;
    cout<<amount;
    y=amount/50;
    amount=amount-y*50;
    z=amount/20;
    amount=amount-z*20;
    a=amount/10;
    amount=amount-a*10;
    cout<<"Number of 100 notes required :"<<x;
    cout<<"\nNumber of 50 notes required :"<<y;
    cout<<"\nNumber of 20 notes required :"<<z;
    cout<<"\nNumber of 10 notes required :"<<a;
    return 0;
}