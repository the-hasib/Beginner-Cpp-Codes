#include <iostream>
using namespace std;
void FindOdd(int a ){
    if(a%2==0){
        cout<<"This number is not odd";
    }
    else {
    cout<<"This number is odd";
    }  
}
int main (){
    int a,b;
    //user input 
    cout<<"Enter any int value = ";
    cin >> a;
    FindOdd(a);
  
    return 0;
}