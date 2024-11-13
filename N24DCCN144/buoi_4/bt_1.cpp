#include <iostream>
using namespace std;

int main()
{
    char a = 0;

    cout << "hay dien vao mot ky tu chu: ";
    cin >> a;

    if (a >= 65 && a <=90)
    {
        cout << a << " la mot ky tu chu in hoa\n";
    }
    else 
    {
        cout << a << " la mot ky tu chu in thuong\n";       
    }

}