#include <iostream>
#include <cmath>
using namespace std;

void printPrimesInRange(int start, int end)
{
    for (int num = start; num <= end; num++)
    {
        bool isPrime = true;
        if (num < 2)
            continue;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " ";
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;
    printPrimesInRange(start, end);
    return 0;
}
