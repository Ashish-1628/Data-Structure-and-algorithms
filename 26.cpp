//WAP to sort all 0's and 1's  in an array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of element of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter an array in 0's and 1's :";
    for(int i=0;i<n;i++) cin>>arr[i];
    int count0=0;
    for(int i=0;i<n;i++)
        if(arr[i]==0) count0++;
    for (int i=0;i<n;i++)
        arr[i]=(i<count0) ? 0 : 1;
    cout<<"Sorted array :";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
