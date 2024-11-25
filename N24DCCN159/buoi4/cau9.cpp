#include <iostream>
#include <math.h>
using namespace std;
int main()
{
double a,b,c,d;
cout<<"giai pt ax^2 + bx + c = 0"<<endl;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c=";cin>>c;
d=(b*b)-(4*a*c);
if (a==0&&b==0&&c==0)
   {cout<<"vo so nghiem";}else
if ((a==0&&b==0&&c!=0)||(a!=0&&d<0))
   {cout<<"vo nghiem";}else
if (a==0&&b!=0&&c==0)
   {cout<<"x=0";}else
if (a==0&&b!=0&&c!=0)
   {cout<<"x="<<-c/b;}else
if (a!=0&&d>0)
   {
    cout<<"x1="<<(-b+sqrt(d))/(2*a)<<endl
        <<"x2="<<(-b-sqrt(d))/(2*a);
   }else
if (a!=0&&d==0)
   {cout<<"x1=x2="<<-b/(2*a);}
return(0);
}