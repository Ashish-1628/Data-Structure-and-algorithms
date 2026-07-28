//WAP to get nth term of fabonnaci series
#include<iostream>
using namespace std;
int fibonnaci(int n){
    int a=0;
    int b=1;
    int result=a+b;
    if(n==0)    return 0;
    if(n==1)    return 1;
    for(int i=1;i<=n;i++){
        result+=i;
    }
}
int main(){
    int n;
    cout<<"Enter the number of term of fibonnaci series :";
    cin>>n;
    fibonnaci(num);
    return 0;
}