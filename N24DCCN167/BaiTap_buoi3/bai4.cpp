#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 3, b = 5;
    // cin >> a >> b;
    // a = 3, b = 5;
    a = abs(a - b);
    b = b - a;
    a = a + b;
    cout << a << " " << b;

    return 0;
}