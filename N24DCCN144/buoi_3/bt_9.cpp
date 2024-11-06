#include <iostream>
using namespace std;

int main()
{
    float a = 0;

    cout << "hay nhap vao mot so thuc: ";
    cin >> a;

    cout << "phan thap phan cua so thuc do la: " << a - (int)a;

    cin >> a;
    
    return 0;
}