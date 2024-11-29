#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    if (a == 0)
    {
        if (b == 0)
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
        double x = -b / a;
        cout << x << endl;
    }

    return 0;
}
