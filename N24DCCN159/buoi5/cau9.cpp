#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int b = m - 1, c = b, i = 1, j = 1;
    while (i <= m)
    {
        for (int i1 = 1; i1 <= n; i1++)
        {
            int k = 1, h = b, H = b;
            while (h > 0)
            {
                cout << " ";
                h--;
            }
            while (k <= j)
            {
                cout << "*";
                k++;
            }
            while (H > 0)
            {
                cout << " ";
                H--;
            }
        }

        if (i == m)
        {
            cout << endl;
            for (int i2 = 1; i2 <= n; i2++)
            {
                int c1 = c, c2 = c;
                while (c1 > 0)
                {
                    cout << " ";
                    c1--;
                }
                cout << "*";
                while (c2 > 0)
                {
                    cout << " ";
                    c2--;
                }
            }
        }
        cout << endl;
        i++;
        j += 2;
        b--;
    }

    return (0);
}