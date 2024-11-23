#include <iostream>

using namespace std;

string chuyenThuong(string s)
{
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (char(s[i]) >= 65 && char(s[i]) <= 90)
        {
            string newStr(1, char(int(s[i]) + 32));
            s.replace(i, 1, newStr);
        }
    }
    return s;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    cin >> a;

    cout << chuyenThuong(a);
}