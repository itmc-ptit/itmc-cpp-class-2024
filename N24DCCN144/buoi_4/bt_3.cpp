#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 0;

    cout << "hay nhap vao mot so tu nhien de toi kiem tra xem chung co phai so chinh phuong khong: ";
    cin >> n;

    double hieu = sqrt(n) - (int)sqrt(n);

    if (hieu == 0)
    {
        cout << n << " la mot so chinh phuong";
    }
    else
    {
        cout << n << " khong phai la mot so chinh phuong";
    }
}