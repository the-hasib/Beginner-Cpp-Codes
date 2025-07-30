#include<iostream>
using namespace std;
int series(int n) {
    if (n == 0)
        return 0;
    return n*n*n*n*n + series(n-1);
}

int main(){
      int n;
      cout<<"Enter any number for calculate series :";
     cin >> n;
     int result=series(n);
     cout<< "Result = "<<result;


    return 0;
}