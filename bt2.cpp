#include <iostream>
<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
using namespace std;

int main()
{
<<<<<<< HEAD
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
=======
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double kc = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << kc << endl;
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
