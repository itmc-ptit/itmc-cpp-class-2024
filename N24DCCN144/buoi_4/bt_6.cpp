#include <iostream>
using namespace std;

int main()
{
    int year = 0;
    bool check = true;

    cout << "hay nhap vao mot nam: ";
    cin >> year;

    if (year % 4 != 0)
    {
        check = false;
    }
    else if ( (year % 100 == 0) && (year % 400 != 0) )
    {
        check = false;
    } 

    if (check == true)
    {
        cout << year << " la mot nam nhuan";
    }
    else
    {
        cout << year << " khong phai la mot nam nhuan";
    }

}