//WAP for intersection of arrays
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of element of first array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of first array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of element of  array :\n";
    cin>>m;
    int arr1[m];
    cout<<"Enter "<<m<<" elements of second array :\n";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Common element after array intersection :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" ";
                break;
            } 
        }
    }
    cout<< endl;
    return 0;
}
