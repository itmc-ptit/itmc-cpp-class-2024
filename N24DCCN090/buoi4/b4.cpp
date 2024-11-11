#include <iostream>
using namespace std;

int main()
{
    double x1 ,x2 ,x3,x4;

    cout << "hay nhap vao bon so canh nhau mot dau cach: ";
    cin >> x1 >> x2 >> x3 >> x4;

    if (x1 < x2) x1 = x2;
    if (x1 < x3) x1 = x3;
    if (x1 < x4) x1 = x4;

    cout << "so lon nhat la: " << x1;

}