#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"nhap so nguyen a: ";cin>>a;
cout<<"nhap so nguyen b: ";cin>>b;
a=a*b;
b=a/b;
a=a/b;
cout<<"sau khi hoán đổi"<<"\n"<<"a="<<a<<"\n"<<"b="<<b;
}
