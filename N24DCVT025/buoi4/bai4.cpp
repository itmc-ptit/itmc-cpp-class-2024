//4
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d;
    cout<<"nhap so thu 1: ";cin>>a;
    cout<<"nhap so thu 2: ";cin>>b;
    cout<<"nhap so thu 3: ";cin>>c;
    cout<<"nhap so thu 4: ";cin>>d;
    cout<<"so lon nhat trong 4 so la "<<max(a,max(b,max(c,d)));
    return 0;
}