#include<iostream>
using namespace std;
 int factorial(int n) {
    if (n == 0)
        return 1;
    return n*factorial(n-1);
}

int main(){
      int n;
      cout<<"Enter any number for find factoria :";
     cin >> n;
     int result=factorial(n);
     cout<< "Result = "<<result;


    return 0;
}