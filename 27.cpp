//Linear Search
#include<iostream>
using namespace std;
int main(){
    int num,ele;
    cout<<"Enter  number of elements :";
    cin>>num;
    int arr[num];
    cout<<"Enter "<<num<<" element of array :";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search :";
    cin>>ele;
    bool found=false;
    for(int i=0;i<num;i++) {
        if(arr[i]==ele){
            cout<<"Element "<<ele<<" found at "<<i<<" index\n";
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Element "<<ele<<" not present in array\n";
    }
    return 0;
}