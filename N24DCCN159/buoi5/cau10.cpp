#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool b = false;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (b)
            {
                cout << "x";
            }
            cout << i;
            a /= i;
            i = 2;
            b = true;
        }
    }
    return (0);
}
