#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // spaces
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";  // stars
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // spaces
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";  // stars
        }
        cout << endl;
    }

    return 0;
}
