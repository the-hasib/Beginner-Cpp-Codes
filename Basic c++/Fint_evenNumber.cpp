#include <iostream>
using namespace std;
void FindEven(int a ){
    if(a%2==0){
        cout<<"This number is even";
    }
    else {
    cout<<"This number is not even";
    }  
}
int main (){
    int a,b;
    //user input 
    cout<<"Enter any int value = ";
    cin >> a;
    FindEven(a);
  
    return 0;
}