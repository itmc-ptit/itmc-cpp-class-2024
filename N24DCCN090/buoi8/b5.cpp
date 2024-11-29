#include<iostream>
#include<string>
using namespace std;
 bool containsChar(string s,char c)
 {  int d=-1;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==c) {d=i;break;}
    }
    cout<<d;
    return true;
 }
 int main()
 {
    string a;
    char c;
    cout<<"nhap chuoi vaf kis tu   ";
    cin >>a;
    cin>>c;
    containsChar(a,c);
    return 0;  

 }