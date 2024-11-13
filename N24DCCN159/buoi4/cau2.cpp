#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float x1,x2,y1,y2,d;
cout<<"nhap theo thu tu x1 x2 y1 y2: ";
cin>>x1>>x2>>y1>>y2;
cout<<"khoang cach la: "<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
return(0);
}