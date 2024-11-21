#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;
    if (n>2 && n%2!=0){
    for (int i = 3; i <= sqrt(n) ; i+=2)
    {
        if (n % i == 0) return false;
    }
    } else return false;
    return true;
}

int main()
{
    int n ;

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