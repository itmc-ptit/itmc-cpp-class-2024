#include<iostream>
using namespace std;
int main()
{
    char a; cin >> a;
    if(a>=65 && a<=90)
    {
        cout << a << " la chu in hoa";
    }
    else if(a>=97 && a<=122)
    {
        cout << a <<" la chu in thuong";
    }
}