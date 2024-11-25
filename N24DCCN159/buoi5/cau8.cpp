#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int b = m - 1, c = b, i = 1, j = 1;
    while (i <= m)
    {
        int k = 1, h = b;
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
        cout << endl;
        if (i == m)
        {
            while (c > 0)
            {
                cout << " ";
                c--;
            }
            cout << "*";
        }
        i++;
        j += 2;
        b--;
    }

    return (0);
}