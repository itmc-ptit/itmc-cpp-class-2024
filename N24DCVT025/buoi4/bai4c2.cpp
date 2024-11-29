//4
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d;
    cout<<"nhap so thu 1: ";cin>>a;
    cout<<"nhap so thu 2: ";cin>>b;
    cout<<"nhap so thu 3: ";cin>>c;
    cout<<"nhap so thu 4: ";cin>>d;
    int m=a;
    if (b>m){
        m=b;
    }
    if (c>m){
        m=c;
    }
    if (d>m){
        m=d;
    }
    cout<<m;
    return 0;
}