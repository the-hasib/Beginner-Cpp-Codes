#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        int comp;

        // assigning values to the comparator according to the row number
        if (i < n)
            comp = 2 * (n - i) - 1;
        else
            comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++)
            cout << " ";

        // Second inner loop to print stars
        for (int k = 0; k < 2 * n - comp; k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}


