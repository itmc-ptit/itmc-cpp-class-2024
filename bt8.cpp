#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
    int height;
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= height - 1; i++)
    {
        cout << " ";
    }
    cout << "*" << endl;
=======
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "Day la tam giac deu." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Day la tam giac can." << endl;
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "Day la tam giac vuong." << endl;
        }
        else
        {
            cout << "Day la tam giac thuong." << endl;
        }
    }
    else
    {
        cout << "Day khong phai la tam giac." << endl;
    }
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
