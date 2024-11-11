//Nhập x1, y1, x2, y2 là toạ độ của 2 điểm (x1, y1) và (x2, y2). Tính khoảng cách giữa 2 điểm đó. vd: khoảng cách giữa (1,2) và (4,5) là 4.24264
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b ,x,y;
    cout<<"nhập tòa độ điểm A(a,b):";
    cin>>a>>b;
    cout<<"nhập tòa độ điểm B(x,y):";
    cin>>x>>y;

    float F = sqrt(pow(x-a,2)+pow(y-b,2));
    cout<<"khoảng cách 2 điểm là: "<<F<<endl;
    return 0;
}