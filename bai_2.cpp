#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float a,b,c,d,e;
    cout << "Nhap toa do (x1,y1) cua diem 1" << endl;
    cin >>a>>b;
    cout << "Nhap toa do (x2,y2) cua diem 2 "<< endl;
    cin >>c>>d;
    e = sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    cout << " Khoang cach giua 2 diem do la :"<< e;
    return 0;
}