#include <iostream>

using namespace std;

int find(string a, char c)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == c)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    cin >> a;

    char c;
    cout << "nhap vao ky tu can tim kiem: ";
    cin >> c;

    cout << find(a, c);
}