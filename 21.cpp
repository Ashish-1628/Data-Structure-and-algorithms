//WAP to get unique element in array
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
    cout<<"Unique Element :";
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}