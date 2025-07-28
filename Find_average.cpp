#include <iostream>
using namespace std;

float avg(int n) {
    float sum = 0, number;
     cout << "Enter number ";
    for (int i = 0; i < n; i++) {
        cin >> number;
        sum += number;
    }
    return sum / n;
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;
    float result = avg(n);
    cout << "Average = " << result << endl;
    return 0;
}
