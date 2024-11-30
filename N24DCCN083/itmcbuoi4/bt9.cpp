#include <iostream>
#include <math.h>
using namespace std;
int main()
{   
    float  a , b , c , delta;
    cout << " nhap a,b,c :";
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    if(a == 0)
    {
        if(b !=0 )
    {
        cout << " vay x = " << -(float(c)/b);
    }
    else if (b == 0 && c == 0)
    {
        cout << "phuong trinh vo so nghiem";
    }
    else
    {
        cout << "phuong trinh vo nghiem";
    }
    }
    else if(delta < 0)
    {
        cout << " phuong trinh vo nghiem ";
    }
    else if( delta > 0 )
    {
        cout << "phuong trinh co 2 nghiem phan biet "<<   "x1 ="<< (-b + sqrt(delta))/(2*a)<< "; x2 ="<< (-b - sqrt(delta))/(2*a);
    }
    else
    {
        cout << " phuong trinh co nghiem kep:"<<" x12 =" <<-b/(2*a);  
    }
    return 0;
}
