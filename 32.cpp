// Check array is sorted using recursion
// #include<iostream>
// using namespace std;
// bool isSorted(int* arr,int size){
//     if(size==0 || size==1)    return true;
//     if(arr[0]>arr[1])   return false;
//     else{
//         bool remainingPart=isSorted(arr+1,size-1);
//         return remainingPart;
//     }
// }
// int main(){
//     int arr[5]={2,4,6,9,9};
//     int size=5;
//     bool ans=isSorted(arr,size);
//     if(ans)     cout<<"Array is sorted "<<endl;
//     else    cout<<"Array is not sorted "<<endl;
//     return 0;
// }

// Sum of array using recursion
// #include<iostream>
// using namespace std;
// int sumArray(int* arr,int size){
//     int sum=arr[0];
//     if(size==1) return arr[0];
//     else{
//         sum+=sumArray(arr+1,size-1);
//         return sum;
//     }
// }
// int main(){
//     int arr[5]={};
//     int size=5;
//     cout<<"Sum of array is :"<<sumArray(arr,size)<<endl;
//     return 0;
// }

// Search element with linear search using recursion
// #include<iostream>
// using namespace std;
// bool eleSearch(int* arr,int size,int key){
//     if(size==0) return false;
//     if(key==arr[0]) return true;
//     else{
//         bool ans=eleSearch(arr+1,size-1,key);
//         return ans;
//     }
// }
// int main(){
//     int arr[6]={1,2,3,4,5};
//     int size=6;
//     int key=5;
//     bool ans=eleSearch(arr,size,key);
//     if(ans) cout<<"Element is present in Array "<<endl;
//     else    cout<<"Element is not present in Array "<<endl;
//     return 0;
// }

// Binary search using recursion
#include<iostream>
using namespace std;
void print(int arr[],int low,int high){
    for(int i=low;i<=high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool BinarySearch(int* arr,int low,int high,int key){
    cout<<endl;
    print(arr,low,high);
    int mid=(low+high)/2;
    cout<<"Value of mid is :"<<arr[mid]<<endl;
    if(low>high)    return false;
    if(arr[mid]==key)   return true; 
    if(arr[mid]<key){
        bool remainingPart=BinarySearch(arr,mid+1,high,key);
        return remainingPart;
    }
    else{
        bool remainingPart=BinarySearch(arr,low,mid-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=5;
    int key=6;
    bool ans=BinarySearch(arr,0,size,key);
    if(ans) cout<<"Element is present in Array "<<endl;
    else    cout<<"Element is not present in Array "<<endl;
    return 0;
}