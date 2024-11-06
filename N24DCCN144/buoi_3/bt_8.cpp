#include <iostream>
using namespace std;

int main()
{
    float a = 0;
    float b = 0;

    cout << "hay nhap vao so thuc dau tien: ";
    cin >> a;

    cout << "hay nhap vao so thuc thu hai: ";
    cin >> b;

    cout << "tong hai so do lay phan nguyen la: " << (int)(a + b);
    
    return 0;
}