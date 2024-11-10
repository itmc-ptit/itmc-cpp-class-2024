#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d;
    cout <<"nhap vao 4 so ngau nhien ";
    cin >>a>>b>>c>>d;
    if ((a>b)&&(a>c)&&(a>d))
        cout <<a<<" la so lon nhat trong 4 so";
    else 
        if((b>a)&&(b>c)&&(b>d))
            cout <<b<<" la so lon nhat trong 4 so";

        else 
            if ((c>a)&&(c>b)&&(c>d))
                cout <<c<<" la so lon nhat trong 4 so";
            else 
                cout<<d<<" la so lon nhat trong 4 so";
}