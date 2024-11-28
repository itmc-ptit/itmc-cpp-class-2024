#include<iostream>
using namespace std;
int main()
{
    cout << "a.x+b=0\n";
    float a, b, x;
    cin >> a >> b;
    if(a==0 && b!=0)
    {
        cout << "error";
    }
    else if(a==0 && b==0)
    {
        cout << "error";
    }
    else
    {
        x=-b/a;
        cout <<"x=" << x;
    }
}