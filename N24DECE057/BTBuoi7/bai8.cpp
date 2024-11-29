#include <iostream>
using namespace std;
bool isPalindrome(int n) {
     string s=to_string(n);
     string s1="";
     for (int i=s.size()-1;i>=0;i--) s1+=s[i];
     return s==s1;
}
int main() {

    
    if (isPalindrome(11211)) cout<<"YES";
       else cout<<"NO";

    return 0;
}