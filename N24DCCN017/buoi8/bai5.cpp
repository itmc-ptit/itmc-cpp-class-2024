#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1;
    cout<<"nhap chuoi: ";cin>>str;
    cout<<"nhap ky tu: ";cin>>str1;
    if (str.find(str1)==(pow(2,64)-1)) cout<<-1;
    else cout<<str.find(str1);
}