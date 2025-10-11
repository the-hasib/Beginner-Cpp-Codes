#include <iostream>
#include <string>
using namespace std;

void pypart(int n) {
    int k = n;

    // outer loop for rows
    for (int i = 1; i <= n; i++) {
        string line = "";

        // inner loop for columns
        for (int j = 1; j <= n; j++) {
            if (j >= k)
                line += "* ";
            else
                line += " ";
        }

        k--;
        cout << line << endl;
    }
}

int main() {
    int n = 5;
    pypart(n);
    return 0;
}
