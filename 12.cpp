//WAP to check for even odd using bool
#include<iostream>
using namespace std;
bool Even_Odd(int num){
    return num%2==0;
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(Even_Odd(num)){
        cout<<num<<" is an even number";
    }
    else{
        cout<<num<<" is an odd number";
    }
    return 0;
}