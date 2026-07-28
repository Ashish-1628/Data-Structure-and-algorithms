//WAP to convert Binary number into Decimal number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,power=0;
    double decimal=0;
    cout<<"Enter a Number :\n";
    cin>>num;
    int num1=num;
    while(num1>0){
        int digit=num1%10;
        if(digit==1){
            decimal+=pow(2,power);
        }
        num1=num1/10;
        power++;
    }
    cout<<"Number in Binary :"<<num;
    cout<<"\nNumber in Decimal :"<<decimal;
    return 0;
}