#include<iostream>
using namespace std;
int main(){
    // Pattern 1
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 2
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
   // Pattern 3
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+k-1;
            cout<<ch;
            k+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 4
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int k=i;
        int j=1;
        while(j<=i){
            char ch='A'+k-1;
            cout<<ch;
            j+=1;
            k+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 5
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=n){
            char ch='A'+k-1;
            cout<<ch;
            k+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 6
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            char ch='A'+n-i+j;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}