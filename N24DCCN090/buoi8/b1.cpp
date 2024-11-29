#include<iostream>
using namespace std;
 void hm(string s)
 {
    for(int i=s.length()-1;i>-1;i--)
    {
        cout<<s[i];
    }
 }
 int main()
 {
    string s;
    cout<<"nhap chuoi : ";
    cin>>s;
    hm(s);
 }