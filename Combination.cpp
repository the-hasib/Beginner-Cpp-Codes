#include <iostream>
using namespace std;

int combination(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    int result = combination(n, r);
    cout << "C(" << n << ", " << r << ") = " << result << endl;

    return 0;
}
