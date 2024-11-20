#include <iostream>
<<<<<<< HEAD
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
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
=======
using namespace std;

int main()
{
    int num, maxNum;
    cin >> maxNum;

    for (int i = 1; i < 4; i++)
    {
        cin >> num;
        if (num > maxNum)
        {
            maxNum = num;
        }
    }

    cout << maxNum << endl;
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
