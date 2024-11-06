#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    int c = 0;

    c = a;
    a = b;
    b = c;

    cout << "a = " << a << "|| b = " << b;
}