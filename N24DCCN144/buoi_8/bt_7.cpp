#include <iostream>
#include <string>

using namespace std;

string xoaKhoangTrongThua(string str)
{
    string newStr = "";
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] != char(32))
        {
            newStr = newStr + str[i];
        }
        else if (str[i] != str[i + 1])
        {
            newStr = newStr + str[i];
        }
    }

    newStr = newStr + str[str.length() - 1];

    if (newStr[0] == char(32))
    {
        newStr.erase(0, 1);
    }
    if (newStr[newStr.length() - 1] == char(32))
    {
        newStr.erase(newStr.length() - 1, 1);
    }

    return newStr;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    getline(cin, a);

    cout << xoaKhoangTrongThua(a);
}