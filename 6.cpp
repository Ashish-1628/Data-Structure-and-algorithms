#include<iostream>
using namespace std;
int main(){
    //Check for Prime number 
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i+=1;
    }
}