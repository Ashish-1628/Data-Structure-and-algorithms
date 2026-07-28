//WAP to find triplate sum in array
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter target sum: ";
    cin>>target;
    sort(arr,arr+n);
    cout<<"Triplets with sum "<<target<<":\n";
    for (int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int l=i+1,r=n-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==target){
                cout<<"("<<arr[i]<<", "<<arr[l]<<", "<<arr[r]<<")\n";
                while(l<r && arr[l]==arr[l+1]) l++;
                while(l<r && arr[r]==arr[r-1]) r--;
                l++;r--;
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return 0;
}
