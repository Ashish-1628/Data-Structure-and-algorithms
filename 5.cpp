#include<iostream>
using namespace std;
int main(){
    
    //Count upto n terms
    /*int n;
    cout<<"Enter the range of Number:";
    cin>>n;
    int i=0;
    while(i<n+1){
        cout<<i<<endl;
        i++;
    }*/

   //Sum upto n terms
   int n,i=1;
   cout<<"Enter value of sum:";
   cin>>n;
   int sum=0;
   while(i<=n){
    sum+=i;
    i+=1;
   }
   cout<<"Value of sum is "<<sum<<endl;
}