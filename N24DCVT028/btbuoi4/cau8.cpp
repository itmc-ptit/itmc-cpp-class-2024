#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "nhap 3 canh a b c: ";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            cout << "la tam giac deu" << endl;
        }
        else if (a == b || b == c || c == a)
        {
            cout << "la tam giac can" << endl;
        }
        else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(c, 2) + pow(a, 2) == pow(b, 2))
        {
            cout << "la tam giac vuong" << endl;
        }
        else
        {
            cout << "la tam giac thuong" << endl;
        }
    }
    else
    {
        cout << "ko phai tam giac dau" << endl;
    }
}