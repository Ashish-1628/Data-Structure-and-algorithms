//Recursion in String 
//Reverse a string using Recursion
// #include<iostream>
// using namespace std;
// void reverse(int i, int j, string& str){
//     if(i>j) return ;
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(i,j,str);
// }
// int main(){
//     string branch="coder";
//     reverse(0,branch.length()-1,branch);
//     cout<<"Reverse string "<<branch<<endl;
//     return 0;
// }


// Check Palindrome string
// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str,int i,int j){
//     if(i>j) return true;
//     if(str[i]!=str[j])  return false;
//     i++,j--;
//     return checkPalindrome(str,i,j);

// }
// int main(){
//     string str="abba";
//     if(checkPalindrome(str,0,str.length()-1)) cout<<"String is palindrome "<<endl;
//     else    cout<<"String is not Palindrome "<<endl;
//     return 0;
// }


// Exponent form 
// #include<iostream>
// using namespace std;
// int expo(int x,int y){
//     if(y==0)    return 1;
//     if(y==1)    return x;
//     if(y%2==0)  return expo(x,y/2)*expo(x,y/2);
//     else        return x*expo(x,y/2)*expo(x,y/2);
// }
// int main(){
//     int i,j;
//     cin>>i>>j;
//     cout<<i<<"^"<<j<<"="<<expo(i,j)<<endl;
//     return 0;
// }


// Bubble sort using recursion
// #include<iostream>
// using namespace std;
// void BubbleSort(int* arr,int n){
//     if(n==0 || n==1)    return;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
//     }
//     BubbleSort(arr,n-1);
// }
// int main(){
//     int arr[5]={5,2,4,3,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     BubbleSort(arr,n);
//     cout<<"Sorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//Selection Sort using recursion
// #include<iostream>
// using namespace std;
// void SelectionSort(int* arr,int n,int j){
//     if(n==0 or j==n-1)    return;
//     int min=j;
//     for(int i=j;i<n;i++){
//         if(arr[i]<arr[min])  min=i;
//     }
//     swap(arr[j],arr[min]);
//     j++;
//     SelectionSort(arr,n,j);
// }
// int main(){
//     int arr[5]={5,4,2,3,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"UnSorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     SelectionSort(arr,n,0);
//     cout<<"Sorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//Insertion Sort using recursion
// #include<iostream>
// using namespace std;
// void InsertionSort(int* arr,int n){
//     if(n==0 || n==1)    return ;
//     InsertionSort(arr,n-1);
//     int i=0,key=arr[n-1];
//     for(i=n-2;i>=0 && arr[i]>key;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[i+1]=key;
// }
// int main(){
//     int arr[5]={5,4,2,3,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"UnSorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     InsertionSort(arr,n);
//     cout<<"Sorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0; 
// }


//Merge Sort using Recursion
// #include<iostream>
// using namespace std;
// void Merge(int* arr,int s,int e){
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int* first=new int[len1];
//     int* second=new int[len2];
//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
//     k=mid+1;
//     for(int j=0;j<len2;j++){
//         second[j]=arr[k++];
//     }
//     int index1=0,index2=0;
//     k=s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2])    arr[k++]=first[index1++];
//         else    arr[k++]=second[index2++];
//     }
//     while(index1<len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[k++]=second[index2++];
//     }
// }
// void MergeSort(int* arr,int s,int e){
//     int mid=(s+e)/2;
//     if(s>=e) return;
//     MergeSort(arr,s,mid);
//     MergeSort(arr,mid+1,e);
//     Merge(arr,s,e);
// }
// int main(){
//     int arr[5]={5,4,2,3,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<" UnSorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     MergeSort(arr,0,n-1);
//     cout<<" Sorted array "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//Inversion Cout using Recursion
// #include<iostream>
// using namespace std;
// long long Merge(int arr[], int s, int e) {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int* left = new int[len1];
//     int* right = new int[len2];
//     int k = s;
//     for(int i = 0; i < len1; i++) {
//         left[i] = arr[k++];
//     }
//     k = mid + 1;
//     for(int i = 0; i < len2; i++) {
//         right[i] = arr[k++];
//     }
//     int index1 = 0, index2 = 0;
//     k = s;
//     long long invCount = 0;
//     while(index1 < len1 && index2 < len2) {
//         if(left[index1] <= right[index2]) {
//             arr[k++] = left[index1++];
//         }
//         else {
//             arr[k++] = right[index2++];
//             // Count inversions
//             invCount += (len1 - index1);
//         }
//     }
//     while(index1 < len1) {
//         arr[k++] = left[index1++];
//     }
//     while(index2 < len2) {
//         arr[k++] = right[index2++];
//     }
//     delete[] left;
//     delete[] right;
//     return invCount;
// }
// long long Inversion(int arr[], int s, int e) {
//     if(s >= e)
//         return 0;
//     int mid = (s + e) / 2;
//     long long leftInv = Inversion(arr, s, mid);
//     long long rightInv = Inversion(arr, mid + 1, e);
//     long long mergeInv = Merge(arr, s, e);
//     return leftInv + rightInv + mergeInv;
// }
// int main() {
//     int arr[5] = {5, 8, 6, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "UnSorted array" << endl;
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     long long inversions = Inversion(arr, 0, n - 1);
//     cout << "Sorted array" << endl;
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Inversion Count = " << inversions << endl;
//     return 0;
// }


//Quick sort using recursion
#include<iostream>
using namespace std;
void quicksort(int* arr,int x,int y){

}
int main(){
    int arr[5]={5,4,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" UnSorted array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<" Sorted array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}