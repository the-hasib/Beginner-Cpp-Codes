#include <iostream>
using namespace std;

void printDescending(int n) {
    if (n == 0) return;  // base case
    cout << n << " ";    // print first
    printDescending(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printDescending(n);
    return 0;
}
