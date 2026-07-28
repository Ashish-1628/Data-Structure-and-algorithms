//Book Allocation Problem
#include<iostream>
bool isPossible(int arr[],int n,int m,int mid);
using namespace std;
int main(){
    int n,m,arr[1000],sum=0;
    cout<<"Enter number of Student :";
    cin>>n;
    cout<<"Enter the number of Books :";
    cin>>m;
    cout<<"Enter No. of Pages of each books :";
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int start=0,ans=-1;
    int end=sum;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout << "Minimum of the maximum pages allocated: " << ans << endl;
    return 0;
}
bool isPossible(int arr[],int n,int m,int mid){
    int student_Count=1;
    int page_sum=0;
    for(int i=0;i<=n;i++){
        if (arr[i] > mid) return false;
        if(page_sum+arr[i]<=mid){
            page_sum+=arr[i];
        }
        else{
            student_Count++;
            if(student_Count>n){
                return false;
            }
            page_sum=arr[i];
        }
    }
    return true;
}