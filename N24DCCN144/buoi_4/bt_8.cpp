#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "hay nhap vao so do ba canh cua mot tam giac: ";
    cin >> a >> b >> c;

    if ( (a + b <= c) || (a + c <= b) || (b + c <= a) ) 
    {
        cout << "day khong phai la mot tam giac";
    }
    else 
    {
        if (a == b && a == c) 
        {
            cout << "day la tam giac deu";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "day la tam giac can";
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
        {
            cout << "day la tam giac vuong";
        }
        else 
        {
            cout << "day la tam giac binh thuong";
        }      
    }

}