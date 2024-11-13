#include <iostream>
using namespace std;
int main() 
{
double a, max;
cout<<"nhap so thu 1: ";cin>>max;
cout<<"nhap so thu 2: ";cin>>a;
if(a>max){max=a;};
cout<<"nhap so thu 3: ";cin>>a;
if(a>max){max=a;};
cout<<"nhap so thu 4: ";cin>>a;
if(a>max){max=a;};
cout<<"max la: "<<max;
return 0;
}
