//WAP to check for prime return 1 for prime and 0 for not prime
#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<isPrime(num);
    return 0;
}
