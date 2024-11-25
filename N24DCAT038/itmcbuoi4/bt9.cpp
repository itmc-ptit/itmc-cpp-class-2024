#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh co vo so nghiem." << endl;
            }
            else
            {
                cout << "Phuong trinh vo nghiem." << endl;
            }
        }
        else
        {
            cout << "Phuong trinh co nghiem duy nhat: " << -c / b << endl;
        }
    }
    else
    {
        double delta = (pow(b, 2) - 4 * a * c);
        if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem." << endl;
        }
        else if (delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: " << -b / (2 * a) << endl;
        }
        else
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }

    return 0;
}
