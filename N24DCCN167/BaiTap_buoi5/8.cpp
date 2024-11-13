#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 15, m = 5;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= 2 * m - 1; j++)
        {
            if (j <= m - i || j >= m + i)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= m; i++)
    {
        if (i == m)
            cout << "*";
        else
            cout << " ";
    }


      
    return 0;
}