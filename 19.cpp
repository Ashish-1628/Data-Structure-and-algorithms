//WAP for sum of all element of array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element of array :\n";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter "<<n<<" elements of array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"\nSum of all element of array :"<<sum;
    return 0;
}