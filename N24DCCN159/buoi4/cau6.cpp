#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"nhap nam: ";
cin>>a;
if (((a%4==0)&&(a%100!=0))||(a%400==0))
{cout <<a<<" la nam nhuan";} 
else
{cout<<a<<" khong la nam nhuan";}
return(0);
}