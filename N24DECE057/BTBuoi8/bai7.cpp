#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() { 
    
    string s;getline(cin,s);
    stringstream ss(s);
    string word,s1="";
    while (ss>>word) {
        s1+=word;
        s1+=" ";
    }
    s1.pop_back();
    cout<<s1;
    return 0;
}