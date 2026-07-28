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
        while(j<=i){
            cout<<j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 2
    /*int n;
    cout<<"Enter number of rows ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
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
        while(j<=i){
            cout<<k;
            j+=1;
            k+=1;
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
    int j=i;
    while(j>0){
        cout<<j;
        j-=1;
    }
    cout<<endl;
    i+=1;
   }*/
   // Pattern 5
   /*int n;
   cout<<"Enter number of rows ";
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    int k=i;
    while(j<=i){
        cout<<k;
        j+=1;
        k+=1;
    }
    cout<<endl;
    i+=1;
   }*/
   // Pattern 6
   /*int n;
   cout<<"Enter number of rows :";
   cin>>n;3
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;
        j+=1;
    }
    cout<<endl;
    i+=1;
   }*/
   // Pattern 7
   /*int n;
   cout<<"Enter number of rows :";
   cin>>n;
   int i=1;
   int k=1;
   while(i<=n){
    int j=1;
    while(j<n){
        cout<<k;
        j+=1;
        k+=1;
    }
    cout<<endl;
    i+=1;
    }*/
    // Pattern 8
    /*int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<i){
            cout<<" ";
            j+=1;
        }
        int k=i;
        while(k<=n){
            cout<<i;
            k+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 9
    /*int n;
    cout<<"Enter number of rows ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<" ";
            j+=1;
        }
        int k=1;
        while(k<=i){
            cout<<i;
            k+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 10
    /*int n;
    cout<<"ENter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<i){
            cout<<" ";
            j+=1;
        }
        int k=i;
        while(k<=n){
            cout<<k;
            k+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 11
    /*int n;
    cout<<"Enter number of rows ";
    cin>>n;
    int i=1;
    int l=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<" ";
            j+=1;
        }
        int k=1;
        while(k<=i){
            cout<<l;
            k+=1;
            l+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    // Pattern 12
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<n){
            cout<<" ";
            j+=1;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k+=1;
        }
        int m=i-1;
        while(m>0){
            cout<<m;
            m-=1;
        }
        int l=1;
        while(l<n){
            cout<<" ";
            l+=1;
        }
        cout<<endl;
        i+=1;
    }
}