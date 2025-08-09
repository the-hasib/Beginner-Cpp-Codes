#include<iostream>
using namespace std;

void  CheckNeonNumber(int n) {
    int square = n * n;
    int sum = 0;
    int temp = square;  
    cout << "Square is " << square << endl;

    for (; temp != 0;) {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
       if (sum == n) {
        cout << n << " is a Neon Number." << endl;
    } else {
        cout << n << " is not a Neon Number." << endl;
    }
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    CheckNeonNumber(n);

    return 0;
}
