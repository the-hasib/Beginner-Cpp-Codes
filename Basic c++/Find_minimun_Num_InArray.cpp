#include <iostream>
using namespace std;

int FindMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int n = 5; // Fixed size
    int arr[n];

    cout << "Enter any 5 numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minValue = FindMin(arr, n);
    cout << "The minimum is: " << minValue << endl;

    return 0;
}
