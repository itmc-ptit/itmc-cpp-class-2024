#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout <<"Nhap cap toa do x1, y1: ";
    float x1, y1;
    cin >> x1 >> y1;
    cout <<"Nhap cap toa do x2, y2: ";
    float x2, y2;
    cin >> x2 >> y2;
    float kq=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout <<"ket qua: " << kq;
}