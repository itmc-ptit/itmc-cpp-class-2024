#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a,j=0,i=2;
cin>>a;
if (a>=2){
while(i<=sqrt(a))
{
if(a%i==0){j++;break;}
i++;
}
if (j==0){cout<<"la so nguyen to";}else{cout<<"khong la so nguyen to";}
}else{cout<<"khong la so nguyen to";}
return(0);
}