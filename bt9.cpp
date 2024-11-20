#include <iostream>
<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
using namespace std;

int main()
{
<<<<<<< HEAD
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m - i; k++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            for (int t = 1; t <= m - i; t++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= m - 1; i++)
    {
        cout << " ";
    }
    cout << "*";
    for (int k = 1; k <= n - 1; k++)
    {
        for (int i = 1; i <= 2 * (m - 1); i++)
        {
            cout << " ";
        }
        cout << "*";
    }
=======
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

>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
    return 0;
}
