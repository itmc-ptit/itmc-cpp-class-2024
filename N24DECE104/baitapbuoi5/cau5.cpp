
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;

    cout << "Các số nguyên tố nhỏ hơn " << n << " là: ";
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}