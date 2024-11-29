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
void printPrimesInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            cout << i << ' ';
    }
}
int main()
{
    int start, end;
    cin >> start >> end;
    printPrimesInRange(start, end);
    return 0;
}