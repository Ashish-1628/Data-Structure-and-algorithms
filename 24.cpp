//WAP to find pair sum in array
#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Enter target sum: ";
    cin>>target;
    cout<<"Pairs with sum "<<target<<": ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<", "<<arr[j]<<") ";
            }
        }
    }
    cout<<endl;
    return 0;
}
