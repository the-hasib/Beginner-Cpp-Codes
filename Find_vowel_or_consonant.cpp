#include<iostream>
using namespace std;
// Function to check whether a
// character is vowel or not
void checkVorC(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"This character is vawel";
    }
    else {
        cout<<"This character is consonant";
    }
}



int main(){
    char c;
    cout <<"Enter any character: ";
    cin>>c;
    checkVorC(c);

    return 0;
}