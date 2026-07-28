//WAP to build a calculator in c++ using switch statement
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    double result;
    cout << "Enter an operator (+ , - , * , / , % ): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(op){
        case '+':
            result=num1+num2;
            cout<<num1<<"+"<<num2<<"="<<result;
            break;
        case '-':
            result=num1-num2;
            cout<<num1<<'-'<<num2<<"="<<result;
            break;
        case '*':
            result=num1*num2;
            cout<<num1<<'*'<<num2<<"="<<result;
            break;
        case '/':
            result=num1/num2;
            cout<<num1<<'/'<<num2<<"="<<result;
            break;
        case '%':
            result=num1%num2;
            cout<<num1<<'%'<<num2<<"="<<result;
            break;
        default:
            cout<<"Error ! The operator in Incorrect "<<endl;
            break;
    }
    return 0;
}