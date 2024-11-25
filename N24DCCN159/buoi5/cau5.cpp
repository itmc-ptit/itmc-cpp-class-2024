#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, i = 2;
    cin >> a;
    while (i <= a)
    {
        int j = 2, k = 0;
        while (j <= sqrt(i))
        {
            if (i % j == 0)
            {
                k++;
                break;
            }
            j++;
        }
        if (k == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return (0);
}