#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"nhap ki tu: ";
cin>>c;
cout<<"ma ki tu: "<<tolower(c)-32*(c<'a');
}