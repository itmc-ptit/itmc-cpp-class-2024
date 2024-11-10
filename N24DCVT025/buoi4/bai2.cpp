//2
#include <bits/stdc++.h>
using namespace std;
int main(){
    float x1,y1,x2,y2,d,a,b,c;
    cout << "nhap toa do cua vecto 1 \n";
    cout << "x1 = ";cin>>x1;
    cout << "y1 = ";cin>>y1;
    cout << "nhap toa do cua vecto 2 \n";
    cout << "x2 = ";cin>>x2;
    cout << "y2 = ";cin>>y2;
    a=x1-x2;
    b=y1-y2;
    c= a*a+b*b;
    d=sqrt(c);
    cout<<"khoang cach giua hai vecto là: "<<d;
    return 0;
}