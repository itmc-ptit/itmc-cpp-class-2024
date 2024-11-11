#include <iostream>
using namespace std;

int main()
{
    double x1 = 0;
    double x2 = 0;
    double x3 = 0;
    double x4 = 0;

    cout << "hay nhap vao bon so canh nhau mot dau cach: ";
    cin >> x1 >> x2 >> x3 >> x4;

    double max = x1;
    if (max < x2) max = x2;
    if (max < x3) max = x3;
    if (max < x4) max = x4;

    cout << "so lon nhat la: " << max;

}