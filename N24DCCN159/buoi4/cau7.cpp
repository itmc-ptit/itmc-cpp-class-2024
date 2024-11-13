#include <iostream>
using namespace std;
int main()
{
double a,b;
cout<<"giai pt ax+b=0"<<endl
    <<"a=";cin>>a;
cout<<"b=";cin>>b;
if (a!=0) {cout <<"x="<<(-b/a);} else
 {
  if (b!=0){cout<<"vo nghiem";}else {cout<<"vo so nghiem";} ;
 };
return(0);
}