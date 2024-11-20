#include <iostream>
<<<<<<< HEAD
#include <cmath>
=======
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
using namespace std;

int main()
{
<<<<<<< HEAD
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "2";
        int count = 0;
        while (n % 2 == 0)
        {
            count++;
            n /= 2;
        }
        if (count > 1)
            cout << "^" << count;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            cout << " x " << i;
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            if (count > 1)
                cout << "^" << count;
        }
    }

    if (n > 1)
    {
        cout << " x " << n;
    }
    cout << endl;

=======
    int day;
    cin >> day;

    switch (day)
    {
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Sunday" << endl;
    }

>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
    return 0;
}
