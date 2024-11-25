#include <iostream>
#include <cmath>
using namespace std;
bool unaccepted(int n)
{
    return n <= 0;
}
bool tamgiacThuong(int a, int b, int c)
{
    return ((a + b > c) && (a + c > b) && (c + b > a));
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (unaccepted(a) || unaccepted(b) || unaccepted(c))
    {
        cout << "Nhap lai. " << endl;
    }
    else
    {
        if (tamgiacThuong(a, b, c))
        {
            if (a == b && b == c && c == a)
            {
                cout << "Tam giac deu. " << endl;
            }
            else if ((a == b || b == c || c == a))
            {
                cout << "Tam giac can. " << endl;
            }
            else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
            {
                cout << "Tam giac vuong. " << endl;
            }

            else
            {
                cout << "Tam giac thuong. " << endl;
            }
        }
        else
        {
            cout << "Ko phai la tam giac. " << endl;
        }
    }

    return 0;
}