#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        int countCheck = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                countCheck++;
            }
        }
        if (countCheck == 2)
            cout << i << " ";
    }

    return 0;
}