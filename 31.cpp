//Factorial using recursion
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n<0){
//         cout<<"Invalid input"<<endl;
//         exit(0);
//     }
//     if(n==0)    return 1;
//     else    return fact(n-1)*n;
// }
// int main(){
//     int n;
//     cout<<"Enter a number to get factorial :"<<endl;
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is "<<fact(n);
// }

//Power of n
// #include<iostream>
// using namespace std;
// int power(int x,int y){
//     if(y<=1)    return x;
//     else    return x*power(x,y-1);
// }
// int main(){
//     int n,m;
//     cout<<"Enter a number "<<endl;
//     cin>>n;
//     cout<<"Enter the power "<<endl;
//     cin>>m;
//     cout<<"Power of "<<n<<" to "<<m<<" is "<<power(n,m);
// }

// Fibonacci Number
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1)    return 0;
//     if(n==2)    return 1;
//     else    return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int x;
//     cout<<"Fibonacci series number :"<<endl;
//     cin>>x;
//     cout<<"Fibonacci series number "<<x<<" is "<<fibo(x)<<endl;

// }

// Counter ways to reach nth stairs
// #include<iostream>
// using namespace std;
// int nthstair(long n){
//     if(n<0) return 0;
//     if(n==0)    return 1;
//     return nthstair(n-1)+nthstair(n-2);
// }
// int main(){
//     int m;
//     cout<<"Enter nth stair :"<<endl;
//     cin>>m;
//     cout<<"Number of ways are: "<<nthstair(m)<<endl;
// }


// Say Digits
// #include<iostream>
// using namespace std;
// void saydigit(string arr[],int n){ 
//     if(n==0)    return ;
//     int d=n%10;
//     n=n/10;
//     saydigit(arr,n);
//     cout<<arr[d]<<" ";      //Base case ke baad print krega
// }
// int main(){
//     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     cout<<"number is :";
//     saydigit(arr,n);
//     return 0;
// }