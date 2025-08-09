#include<iostream>
using namespace std;

void CheckPrime(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i <= 1) continue; // Skip 0 and 1, not prime

        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " is prime" << endl;
        } else {
            cout << i << " is not prime" << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    CheckPrime(start, end);

    return 0;
}
