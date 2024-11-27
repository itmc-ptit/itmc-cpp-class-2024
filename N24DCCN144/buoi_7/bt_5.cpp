#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1)
        return false;

    if (n == 2)
        return true;

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
        if (checkNgTo(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start = 0;
    int end = 0;

    cout << "nhap khoang start den end cua day ngto (cach nhau mot dau cach): ";
    cin >> start >> end;

    printPrimesInRange(start, end);
}