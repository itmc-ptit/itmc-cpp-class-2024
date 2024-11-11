#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n = 0;

    cout << "hay nhap vao mot so tu nhien de toi kiem tra xem chung co phai so chinh phuong khong: ";
    cin >> n;

      float n1= sqrt(n);

    if (n1- (int)n1 == 0)
    {
        cout << n << " la mot so chinh phuong";
    }
    else
    {
        cout << n << " khong phai la mot so chinh phuong";
    }
}