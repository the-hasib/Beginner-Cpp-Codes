#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int k = 1; k <= rows - i; k++) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}
