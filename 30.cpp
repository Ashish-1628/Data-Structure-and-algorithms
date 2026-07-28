//Reference variable
// #include<iostream>
// using namespace std;
// void update(int& n){    //referencing
//     n++;            //point to same value in memory (same memory different name)
// }
// void update1(int n){   //copy create ki hai aur memory legi alag se
//     n++;
// }
// int main(){
//     int n=5;
//     cout<<" Before "<<n<<endl;
//     update(n);
//     cout<<" After "<<n<<endl;
//     return 0;
// }

//Dynamic memory allocation
// #include<iostream>
// using namespace std;
// int getSum(int* arr,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=*(arr+i);
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     //variable size array
//     int* arr=new int[n];
//     //taking input array
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=getSum(arr,n);
//     cout<<"Sum is "<<ans<<endl;
// }

//Dynamic memory allocation 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;  //number of rows
//     cin>>n;
//     int m;  //number of columns
//     cin>>m;
//     int** arr=new int*[n];
//     for (int i=0;i<n;i++){
//         arr[i]=new int[m];
//     }
//     //creation done
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Array "<<endl;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //releasing memory
//     for (int i=0;i<n;i++){
//         delete [] arr[i];
//     }
//     delete []arr;
// }

//Inline Function
#include<iostream>
using namespace std;
inline int getMax(int& a, int& b){
    return (a>b)? a:b;
}
int main(){
    int a=1,b=2;
    int ans=0;
    ans=getMax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getMax(a,b);
    cout<<ans<<endl;
}