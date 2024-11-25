#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int n = 0;

    cout << "hay nhap vao mot so nguyen va toi se in cac so nho hon no la so nguyen to: ";
    cin >> n;

    for ( int i = 2; i < n; i++)
    {
        if (checkNgTo(i)) 
        {
            cout << i << "  ";
        }
    }
}