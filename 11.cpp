//WAP to get a to power of b
#include<iostream>
using namespace std;
int power(int base,int pow);
int main(){
    int num,pow;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"Enter the power :";
    cin>>pow;
    cout<<power(num,pow);
    return 0;
}
int power(int base,int pow){
    int result=1;
    for(int i=0;i<pow;i++){
        result*=base;
    }
    return result;
}