#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,snt=1;
    cout <<"nhap vao 1 so ngau nhien ";
    cin >>a;
    for (int i=2;i<sqrt(a);i++)
    {
        if (a%i==0)
        {
            snt=0;
            break;
        }
    }
    if (snt==1){
        cout <<a<<" la so nguyen to";
    }
    else{
        cout <<a<<" khong phai la so nguyen to";
    }
}