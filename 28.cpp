//Binary Search
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start,int end,int key);
int main(){
    int num,ele;
    cout<<"Enter number of element of array :";
    cin>>num;
    int arr[num];
    cout<<"Enter element of array :";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"Enter element you want to search :";
    cin>>ele;
    cout<<"Element present at index :"<<BinarySearch(arr,0,num-1,ele);
}
int BinarySearch(int arr[],int start,int end,int key){
    int mid=(start+(end-start))/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return BinarySearch(arr,mid+1,end,key);
    }
    else if(arr[mid]>key){
        return BinarySearch(arr,start,mid-1,key);
    }
    else{
        return -1;
    }
}