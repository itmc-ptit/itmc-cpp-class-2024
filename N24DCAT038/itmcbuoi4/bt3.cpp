#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int root = sqrt(n);
    if (root * root == n)
    {
        cout << n << "day la so chinh phuong." << endl;
    }
    else
    {
        cout << n << "day khong phai la so chinh phuong." << endl;
    }

    return 0;
}
