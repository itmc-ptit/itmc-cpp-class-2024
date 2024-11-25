#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<< "nhap so nguyen n: ";
    cin >> n;
    int canbac2cuan = sqrt(n);
    if (canbac2cuan * canbac2cuan == n)
    {
        cout << "n la so chinh phuong";
    }
    else
    {
        cout << "n khong phai so chinh phuong";
    }
}