#include<iostream>
#include<string>
using namespace std;
 bool containsChar(string s,char c)
 {  int d=0;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==c) {d++ ;}
    }
    if (d!=0) 
    {
        cout<<"trong chuoi cos kys tu do";
    }else {cout<<"ko cos ky tu giong vay trong chuoi";}
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