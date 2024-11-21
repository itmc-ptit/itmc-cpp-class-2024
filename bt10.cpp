#include <iostream>
#include <cmath>
using namespace std;

int main()
{
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

    return 0;
}
