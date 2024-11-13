#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;

    for (int i = 2; i <= sqrt(n) + 1; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int n = 0;
    cout << "ban hay nhap mot so nguyen: ";
    cin >> n;

    int k = n;
    int i = 2;

    cout << n << " = ";
    while (k != 1)
    {
        if (k % i == 0 && checkNgTo(i))
        {
            cout << i;

            k = k/i;
            if (k != 1)
            {
                cout << " X ";
            }          
        }
        else
        {
            i++;         
        }
    }
    
}