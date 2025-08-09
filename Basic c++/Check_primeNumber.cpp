#include<iostream>
using namespace std;
void CheckPrime(int n){
    int count=0;
    if (n<=1){
        cout<<"Number is not prime :";
    }
    else {
        for (int i=2;i<n;i++){
            if(n%i==0){
                 count++;
            }
        }
    }
     if(0<count){
        cout<<"Number is not prime :";

     }
     else 
     cout << "Number is prime :";

    }


int main (){
    int n;
    cout<< "Enter a number:";
    cin>>n;
    CheckPrime(n);


}