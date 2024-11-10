#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout << "a.x2 + b.x + c = 0\n";
    float a, b, c;
    float x1, x2, x;
    cin >> a >> b >> c;
    float den = pow(b,2)-4*a*c;
    if(den>0)
    {
        x1=(-b+sqrt(den))/2*a;
        x2=(-b-sqrt(den))/2*a;
        cout <<"x1=" << x1 <<"\n";
        cout <<"x2=" << x2;
    }
    else if(den==0)
    {
        x=-b/2*a;
        cout <<"x=" << x;
    }
    else {cout <<"phuong trinh vo nghiem";}
}