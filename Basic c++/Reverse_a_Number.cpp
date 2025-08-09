#include <iostream>
using namespace std;
void Reverse(int arr[],int n){
    cout<< "After Reverse array";
    for (int i=n-1; i>=0;i-- ){
        cout<<arr[i]<<" " ;
    }
}

int main (){
    int n;
    cout <<"Enter array size: ";
    cin >>n;
    int arr[n];
     // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
     
        cin >> arr[i];
    }

    Reverse(arr,n);

   return 0;  
}