#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    cout << "chuong trinh tinh khong cach giua hai diem trong khong gian hai chieu \n";
    cout << "hay nhap vao toa do diem thu nhat (nhap x y cach nhau mot giau cach): ";
    cin >> x1 >> y1;

    cout << "hay nhap vao toa do diem thu hai: ";
    cin >> x2 >> y2;

    double x3 = x1 - x2;
    double y3 = y1 - y2;

    double distance = sqrt(x3*x3 + y3*y3);

    cout << "khoang cach giua hai diem la: " << distance; 

}