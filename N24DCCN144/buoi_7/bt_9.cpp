#include <iostream>

using namespace std;

long long fibonacci(int n)
{
    long long fibo[n];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    return fibo[n];
}

int main()
{
    int n = 0;
    cout << "nhap vao mot so nguyen: ";
    cin >> n;

    cout << "so fibonacci thu " << n << ": " << fibonacci(n);
}