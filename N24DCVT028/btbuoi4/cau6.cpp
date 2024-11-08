#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "nhap mot nam: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " la nam nhuan" << endl;
    }
    else
    {
        cout << year << " khong phai nam nhuan" << endl;
    }
}
