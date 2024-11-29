#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int f0 = 0, f1 = 1, f;
    for (int i = 2; i <= n; i++)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    return f;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}