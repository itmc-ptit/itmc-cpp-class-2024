#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
        cout << "Day la so nguyen to." << endl;
    else
        cout << "Day khong phai la so nguyen to." << endl;

    return 0;
}
