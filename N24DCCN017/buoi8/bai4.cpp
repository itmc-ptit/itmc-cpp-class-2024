#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"nhap chuoi can in thuong: ";cin>>str;
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    cout<<"chuoi in thuong: "<<str;
}