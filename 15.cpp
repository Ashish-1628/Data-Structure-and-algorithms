//WAP to get nth term of AP
#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    long nth;
    cout<<"Enter number of terms of AP :";
    cin>>n;
    cout<<"Enter first term of the sequence :";
    cin>>a;
    cout<<"Enter the common difference :";
    cin>>d;
    nth=a+(n-1)*d;
    cout<<nth<<" is the "<<n<<"th term of AP ";
    return 0;    
}