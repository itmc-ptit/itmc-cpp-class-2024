#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string s;cin>>s;
    string s1="";
    for (int i=0;i<s.size();i++) 
      s1+=tolower(s[i]);
    cout<<s1;
    return 0;
}