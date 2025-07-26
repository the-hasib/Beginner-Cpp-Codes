#include <iostream>
using namespace std;
int main (){
    int num1,num2,temp;
    //user input 
    cout<<"Enter any 1st int value = ";
    cin >> num1;
      cout<<"Enter any 2nd int value = ";
    cin >> num2;
    //print before swap value

    cout<<"Number 1 ="<<num1<<endl;
     cout<<"Number 2 ="<<num2<<endl;
    //swap 2 number
    temp=num1;
    num1=num2;
    num2=temp;

    //print after swap value 
     cout<<"After swap number 1 ="<<num1<<endl;
      cout<<" After swap number 2 ="<<num2<<endl;


    return 0;
}