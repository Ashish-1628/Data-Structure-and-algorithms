#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

int main() {
    int n = 43261596;
    cout << "Decimal: " << n << endl;
    cout << "Binary : " << decimalToBinary(n) << endl;

    int m = 25;
    string binary = "11001";

    cout << "\nDecimal to Binary:\n";
    cout << m << decimalToBinary(m) << endl;

    cout << "\nBinary to Decimal:\n";
    cout << binary << binaryToDecimal(binary) << endl;

    return 0;
}
