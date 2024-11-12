#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout <<"nhap vao 1 so nguyen duong ";
    cin >>n;
    double a=sqrt(n);
    if (a==int(a))
        cout <<n<<" la so chinh phuong";
    else 
        cout <<n<<" khong la so chinh phuong";
}