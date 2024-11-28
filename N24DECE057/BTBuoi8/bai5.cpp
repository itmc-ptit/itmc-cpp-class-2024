#include <iostream>
#include <string>
using namespace std;
int main() {
    
    cout<<"Nhap xau : ";
    string s;cin>>s;
    cout<<"Nhap c : ";
    char c;cin>>c;
    int vt=-1;
    for (int i=0;i<s.size();i++)
     if (s[i]==c) {
        vt=i;
        break;
     }
    cout<<vt;
    return 0;
}