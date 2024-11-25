#include <iostream>
using namespace std;
int main()
{
double a,b,c;
cout<<"nhap 3 canh tam giac: "<<endl;
cin>>a>>b>>c;
if (((a+b)<=c)||((a+c)<=b)||((b+c)<=a))
    {cout<<"khong phai tam  giac";}else
if ((a*a==b*b+c*c)||(a*a+b*b==c*c)||(a*a==b*b-c*c))
    {
    cout<<"tam giac vuong";
    if(a==b||b==c||a==c){cout<<" can";}
    }else         
if (a==b&&b==c)
    {cout<<"tam giac deu";}else 
if (a==b||b==c||a==c)
    {cout<<"tam giac can";}else{cout<<"tam giac thuong";}          
return(0);
}