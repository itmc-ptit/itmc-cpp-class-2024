#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "nhap 3 canh a b c: ";
    cin >> a >> b >> c;
    if (a + b > c, a + c > b, b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "day la tam giac deu ";
        }
        else if (a == b || b == c || c == a)
        {
            cout << "day la tam giac can";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "day la tam giac vuong ";
        }
        else
            cout << "day la tam gaic thuong ";
    }
    else
    {
        cout << " khong phai tam giac ";
    }
}