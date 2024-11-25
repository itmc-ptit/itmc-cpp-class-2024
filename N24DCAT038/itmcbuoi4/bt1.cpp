#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Day la chu hoa." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Day la chu thuong." << endl;
    }
    else
    {
        cout << "Day khong phai ky tu chu cai." << endl;
    }

    return 0;
}
