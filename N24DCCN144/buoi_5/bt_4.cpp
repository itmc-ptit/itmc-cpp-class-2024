#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int n = 0;

    cout << "hay nhap vao mot so nguyen va toi se check xem no co phai la so nguyen to khong: ";
    cin >> n;

    if (checkNgTo(n)) 
    {
        cout << "day la mot so nguyen to";
    }
    else
    {
        cout << "day khong phai la mot so nguyen to";
    }
}