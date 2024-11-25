#include <iostream>
using namespace std;

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

    return 0;
}
