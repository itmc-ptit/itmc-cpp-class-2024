#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhập a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b != 0)
        {
            cout << "nghiem x = " << -c / b << endl;
        }
        else
        {
            cout << (c == 0 ? "vo so ngiem" : "vo nghiem") << endl;
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            cout << "hai nghiem x1 = " << (-b + sqrt(delta)) / (2 * a)
                 << ", x2 =" << (-b - sqrt(delta)) / (2 * a) << endl;
        }
        else if (delta == 0)
        {
            cout << "nghiem kep = x" << -b / (2 * a) << endl;
        }
        else
        {
            cout << "vo nghiem thuc" ;
        }
    }
}
