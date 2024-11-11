#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1 ,x2 ,y1 ,y2;
    
    cout << "chuong trinh tinh khong cach giua hai diem trong khong gian hai chieu \n";
    cout << "hay nhap vao toa do diem thu nhat : ";
    cin >> x1 >> y1;

    cout << "hay nhap vao toa do diem thu hai  : ";
    cin >> x2 >> y2;

    double x3 = x1 - x2;
    double y3 = y1 - y2;
    cout << "khoang cach giua hai diem la: " << sqrt(x3*x3 + y3*y3);

}