#include<iostream>
#include<string>
using namespace std;
 int containsChar(string s)
 {  
   int d=0;
   int e=0;
   string c=" ";
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==c[0]&& e==0) {d++;e=1;}
        if (s[i]!=c[0]&& e==1) {e=0;}
    }
    return d;
 }
 int main()
 {
    string a;
    cout<<"nhap chuoi  ";
    getline(cin, a);
    cout<<"so lan cach là :"<<containsChar(a);
    return 0;  
 }