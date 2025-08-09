#include <iostream>
using namespace std;

// Function to find factorial of
// given number
 int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}