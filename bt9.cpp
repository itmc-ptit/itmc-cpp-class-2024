#include <iostream>
using namespace std;

int main()
{
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
    return 0;
}
