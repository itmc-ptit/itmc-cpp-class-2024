#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectNumber(int n)
{
    int sumDevisor = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        sumDevisor += i;
        if (n / i != i && i != 1)
            sumDevisor += n / i;
    }
    if (sumDevisor == n)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (isPerfectNumber(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}