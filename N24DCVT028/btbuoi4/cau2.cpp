#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2;
    cout<<" nhap toan do A(x1,y1)la ";
    cin>>x1>>y1;
    cout<<" nhap toan do B(x2,y2)la ";
    cin>>x2>>y2;
    double khoangcach= sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    cout<<"khoang cach giua 2 diem A va B la = "<<khoangcach;

}