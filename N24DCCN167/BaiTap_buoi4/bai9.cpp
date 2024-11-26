#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int delta = pow(b, 2) - 4 * a * c;
    if (a == 0) {
        cout << "x = " << (-c) / b << endl;
    }
    else
    {
        if (delta < 0)
        {
            cout << "PT vo nghiem. " << endl;
        }
        else if (delta > 0)
        {
            cout << "PT co hai nghiem phan biet: x1 = " << ((-b) + sqrt(delta)) / (2 * a) << " va x2 = " << ((-b) - sqrt(delta)) / (2 * a) << endl;
        }
        else
            cout << "PT co nghiem kep: x = " << (-b) / (2 * a) << endl;
    }



    return 0;
}
