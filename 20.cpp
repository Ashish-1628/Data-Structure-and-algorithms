//WAP to reverse an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element of array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"\nReversed array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}