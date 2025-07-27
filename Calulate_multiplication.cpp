#include <iostream>
using namespace std;
int multiplication(int a ,int b){
    return a*b;
}
int main (){
    int a,b;
    //user input 
    cout<<"Enter any 1st int value = ";
    cin >> a;
      cout<<"Enter any 2nd int value = ";
    cin >> b;
  int  result =multiplication(a,b);
  cout << "Result = "<< result;
    
    return 0;
}