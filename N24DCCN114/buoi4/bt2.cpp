#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cout <<"nhap toa do diem thu nhat ";
    cin >>x1>>y1;
    cout <<"nhap toa do diem thu hai ";
    cin >>x2>>y2;
    double kcach=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout <<"khoang cach giua hai diem la "<<kcach;

}