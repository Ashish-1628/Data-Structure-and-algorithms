// * series patterns
#include<iostream>
using namespace std;
int main(){
    // Pattern 1
    /*int i;
    cout<<"Enter number of Rows ";
    cin>>i;
    int j=1;
    while(j<=i){
        int k=1;
        while(k<=i){
            cout<<"*";
            k=k+1;
        }
        cout<<endl;
        j=j+1;
    }*/
   // Pattern 2
   /*int n;
   cout<<"Number of Rows :";
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"*";
        j+=1;
    }99
    cout<<endl;
    i+=1;
    }*/
    // Pattern 3
    /*int n;
    cout<<"Enter number of rows  :";
    cin>>n;
    int j=1;
    while(j<=n){
        int k=n-j;
        while(k>0){
            cout<<" ";
            k-=1;
        }
        int i=1;
        while(i<=j){
            cout<<"*";
            i+=1;
        }
        cout<<endl;
        j+=1;
    }*/
   // Pattern 4
   /*int n;
   cout<<"Enter number of rows :";
   cin>>n;
   int i=1;
   while(i<=n){
    int j=n-i+1;
    while(j<n){
        cout<<" ";
        j+=1;
    }
    int k=n-i+1;
    while(k>0){
        cout<<"*";
        k-=1;
    }
    cout<<endl;
    i+=1;
   }*/
   // Pattern 5
   /*int n;
   cout<<"Enter number of row :";
   cin>>n;
   int i=1;
   while(i<=n){
    int j=n-i+1;
    while(j>0){
        cout<<"*";
        j-=1;
    }
    int k=n-i+1;
    while(k<n){
        cout<<" ";
        k+=1;
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
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j+=1;
    }
    int k=n-i+1;
    while(k<n && k>0){
        int a=n-k;
        while(a>0){
            cout<<"*";
            a-=1;
        }
        int b=n-k;
        while(b>0){
            cout<<"*";
            b-=1;
        }
        break;
    }
    int l=n-i+1;
    while(l>0){
        cout<<l;
        l-=1;
    }
    cout<<endl;
    i+=1;
   }
}