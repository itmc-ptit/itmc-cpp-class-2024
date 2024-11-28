#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a; cin >> a;
    float b=sqrt(a);
    if(b-(int)sqrt(a)==0)
    {
        cout << a << " la so chinh phuong";
    }
    else
    {
        cout << a <<" khong la so chinh phuong";
    }
}