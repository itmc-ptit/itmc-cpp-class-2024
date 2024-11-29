#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string str)
{
    string newStr = "";
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            newStr = newStr + str[i];
        }
    }

    newStr = newStr + str[str.length() - 1];

    return newStr;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    getline(cin, a);

    cout << removeDuplicates(a);
}