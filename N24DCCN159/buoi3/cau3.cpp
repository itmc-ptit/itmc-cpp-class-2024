#include <iostream>
using namespace std;
int main()
{
int a,b,m;
cout<<"nhap so nguyen a: ";cin>>a;
cout<<"nhap so nguyen b: ";cin>>b;
m=b;
b=a;
a=m;
cout<<"sau khi hoán đổi"<<"\n"<<"a="<<a<<"\n"<<"b="<<b;
}
