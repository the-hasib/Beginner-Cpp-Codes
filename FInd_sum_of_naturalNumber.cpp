#include <iostream>
using namespace std;

int recurSum(int n)
{
    if (n <= 1)
        return n;

    return n + recurSum(n - 1);
}

int main()
{
    int n = 6;
    cout << recurSum(n);

    return 0;
}