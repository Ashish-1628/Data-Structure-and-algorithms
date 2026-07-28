#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,99,23,45,14,10,7,55,34,22};
    int small=arr[0];
    int large=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Array :";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"\nSmallest element in array is :"<<small;
    cout<<"\nLargest element in array is :"<<large;
    return 0;
}