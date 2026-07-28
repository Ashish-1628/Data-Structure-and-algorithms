//WAP to print duplicate element in array
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
    cout<<"Duplicate Element :";
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }
    return 0;
}