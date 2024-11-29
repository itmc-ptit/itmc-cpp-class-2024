#include<iostream>
using namespace std;
 bool kts(string a, string b)
 {
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
 }
 int main()
 {
    string s,c;
    cin>>s>>c;
    if(kts(s,c)) {cout<<" bang nhau";}else{cout<<" ko bang nhau";}

 }