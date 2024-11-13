#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "nhap vao cac he so a b c cua phuong trinh bac hai ax^2 + bx + c = 0 :   ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        a = b;
        b = c;
        if (a == 0)
        {
            if (b == 0)
            {
                cout << "phuong trinh co vo so nghiem";
            }
            else
            {
                cout << "phuong trinh vo nghiem";
            }
        }
        else 
        {
            double nghiem = -b/a;
            if (nghiem == -0) nghiem = 0;
            cout << "nghiem cua phuong trinh la: " << nghiem;
        }
    }
    else 
    {
        double denta = b*b - 4*a*c;

        if (denta < 0)
        {
            cout << "phuong trinh vo nghiem";
        }
        else if (denta == 0)
        {
            double x = (-b + sqrt(denta))/(2*a);

            cout << "phuong trinh co nghiem kep x = " << x;           
        }
        else 
        {
            double x1 = (-b + sqrt(denta))/(2*a);
            double x2 = (-b - sqrt(denta))/(2*a);

            cout << "phuong trinh co hai nghiem \n" << "x1 = " << x1 << "|| x2 = " << x2; 
        }
        
        
    }

}