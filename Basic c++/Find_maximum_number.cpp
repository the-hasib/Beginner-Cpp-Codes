#include <iostream>
using namespace std;

int FindMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]> max)
            max = arr[i];
    }
    return max;
}
int Findmin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]< min)
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
    int max= FindMax(arr, n);
    cout << "The maximum is: " << max << endl;
    int min= Findmin(arr, n);
    cout << "The minimun is: " << min << endl;


    return 0;
}
