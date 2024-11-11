#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    double a=sqrt(n);
    if (a==int(a))
        cout <<n<<" la so chinh phuong";
    else 
        cout <<n<<" khong la so chinh phuong";
}