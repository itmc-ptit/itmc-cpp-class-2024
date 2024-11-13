#include <iostream>
using namespace std;

int main()
{
    double r = 0;
    double max = 0;

    cout << "nhap vao so thu nhat: ";
    cin >> max;

    cout << "nhap vao so thu hai: ";
    cin >> r;
    if (max < r) max = r;

    cout << "nhap vao so thu ba: ";
    cin >> r;
    if (max < r) max = r;

    cout << "nhap vao so thu tu: ";
    cin >> r;
    if (max < r) max = r;

    cout << "so lon nhat la: " << max;
    
}