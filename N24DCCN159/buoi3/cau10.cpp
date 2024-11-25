#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"nhap ki tu: ";
cin>>c;
c=c+(32*(c<'a')-32*(c>='a'));
cout<<"chuyen thanh thuong hoac hoa: "<<c;
}