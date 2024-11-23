#include <iostream>

using namespace std;

string daoChuoi(string a)
{
    string b = "";

    for (int i = a.length() - 1; i >= 0; i--)
    {
        b = b + a[i];
    }

    return b;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    cin >> a;

    a = daoChuoi(a);

    cout << a;
}