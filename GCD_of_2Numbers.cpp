#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;  // base case
    return gcd(b, a % b);  // Euclidean algorithm
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << endl;
    return 0;
}
