#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c,delta;
    cout <<"nhap he so a, b, c cua pt ";
    cin >>a>>b>>c;
    delta = b*b - 4*a*c;
    if (delta <0)
        cout <<"pt vo nghiem";
    else 
        {
            if(delta==0)
                cout <<"pt co nghiem kep x1=x2="<<-b/(2*a);
            else 
            {
                cout <<"pt co 2 ngiem phan biet "<<endl;
                cout <<"x1="<<(-b+sqrt(delta))/(2*a)<<endl;
                cout <<"x2="<<(-b-sqrt(delta))/(2*a)<<endl;
            }
        }
}