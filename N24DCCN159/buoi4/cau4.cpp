#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a,b,c,d;
cout << "nhap 4 so: ";
cin>> a>>b>>c>>d;
cout<<"max la: "<<(max(a,max(b,max(c,d))));
return(0);
}
