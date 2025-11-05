#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    char ch = 'A'; // starting letter

    for (int i = 0; i < rows; i++) {
        // print same alphabet multiple times in each row
        for (int j = 0; j <= i; j++)
            cout << ch << " ";

        cout << endl;
        ch++; // next alphabet
    }

    return 0;
}

