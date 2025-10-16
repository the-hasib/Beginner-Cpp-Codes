#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Outer loop to iterate through each row
    for (int i = 0; i < rows; i++) {

        // First inner loop to print white spaces
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";

        // Second inner loop to print numbers in each row
        for (int k = 0; k < rows; k++)
            cout << k + 1 << " ";

        cout << endl;
    }

    return 0;
}
