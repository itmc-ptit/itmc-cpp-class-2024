#include <iostream>
using namespace std;
bool containsChar(string str,char c) {
    for (int i=0;i<str.size();i++)
       if (c==str[i]) return true;
    return false;
}
int main() {
    string s="ITMC";
    if (containsChar(s,'I')) cout<<"YES";
       else cout<<"NO";
}