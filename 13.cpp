//WAP to generate binomial Coefficient
#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
long long nCr_factorial(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "\nUsing factorial method:\n";
    cout << n << "C" << r << " = " << nCr_factorial(n, r) << std::endl;
    return 0;
}
