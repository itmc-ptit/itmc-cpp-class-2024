#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float r = 0;

    cout << "nhap vao mot so thuc: ";
    cin >> r;

    cout << setprecision(3) << r;

    return 0;
}