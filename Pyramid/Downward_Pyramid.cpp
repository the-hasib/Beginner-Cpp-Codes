#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
