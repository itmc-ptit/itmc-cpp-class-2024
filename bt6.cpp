#include <iostream>
using namespace std;

<<<<<<< HEAD
bool isPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main()
{
    int num;
    cin >> num;

    if (isPerfectNumber(num))
        cout << "Day la so hoan hao." << endl;
    else
        cout << "Day khong phai la so hoan hao." << endl;
=======
int main()
{
    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << "day la nam nhuan." << endl;
    }
    else
    {
        cout << year << "day khong phai nam nhuan." << endl;
    }
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
