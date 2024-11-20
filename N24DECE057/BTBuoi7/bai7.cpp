#include <iostream>
using namespace std;
string removeDuplicates(string str) {
    string s="";
    for (int i=0;i<str.size()-1;i++)
       for (int j=i+1;j<str.size();j++)
         if (str[i]==str[j]) str[j]=' ';
    
    for (int i=0;i<str.size();i++)
     if (str[i]!=' ') s+=str[i];
    return s;
}
int main() {

    cout<<removeDuplicates("aaaabbacddddd");
    return 0;
}