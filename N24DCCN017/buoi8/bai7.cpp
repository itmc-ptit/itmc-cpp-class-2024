#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; 
    cout<<"nhap chuoi: ";getline(cin,str);
    stringstream ss(str);
    string str1;
    while(ss>>str1){
        cout<<str1<<' ';
    }
}