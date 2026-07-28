//Total number of set bits in a & b
#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main() {
    int a, b;
    std::cout << "Enter the first integer (a): ";
    std::cin >> a;
    std::cout << "Enter the second integer (b): ";
    std::cin >> b;
    int setBitsA = countSetBits(a);
    int setBitsB = countSetBits(b);
    int totalSetBits = setBitsA + setBitsB;
    cout<<"Number of set bits in "<<a<<" is: "<<setBitsA<<endl;
    cout<<"Number of set bits in "<<b<<" is: "<<setBitsB<<endl;
    cout<<"Total number of set bits is: "<<totalSetBits<<endl;
    return 0;
}
