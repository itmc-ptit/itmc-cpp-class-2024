#include <iostream>
using namespace std;

int main()
{
    char a = 0;

    cout << "nhap chu : ";
    cin >> a;

    if (a >= 'a' && a <='z')
    {
        cout << a << " la mot ky tu chu in hoa\n";
    }
    else 
    {
        cout << a << " la mot ky tu chu in thuong\n";       
    }
return 0;
}