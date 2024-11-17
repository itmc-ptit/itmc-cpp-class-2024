#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
int a,i=1,b=0;
cin>>a;
while(i<a)
{
if(a%i==0){b+=i;}
i++;
}
if (a==b){cout<<"la so hoan hao";}else{cout<<"khong la so hoan hao";}
return(0);
}