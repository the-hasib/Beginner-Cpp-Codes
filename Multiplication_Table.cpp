#include<iostream>
using namespace std;
int main (){
    int n;
    int range=10;
    cout<<"Enter any number for this Multiplication Table:";
    cin>>n;
    for (int i=1;i<=range;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

}