#include <iostream>
using namespace std;

int main()
{
    char a = 0;

    cout << "hay nhap vao mot chu cai in hoa: ";
    cin >> a;

    cout << (char)tolower(a) << "\n";

    cout << "hay nhap vao mot chu cai in thuong: ";
    cin >> a;

    cout << (char)toupper(a);

    cin >> a;
    
    return 0;
}