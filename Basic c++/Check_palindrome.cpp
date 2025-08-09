#include<iostream>
using namespace std;
bool checkPalindrome(string s, int start, int end) {
    if (start == end or start > end)
        return true;
    return s[start] == s[end] and checkPalindrome(s, start+1, end-1);
}

int main(){
      int n;
     string s;
     cin >> s;
     cout << checkPalindrome(s, 0, s.length()-1) <<endl;

    return 0;
}