#include <iostream>

using namespace std;

bool containsChar(string str, char c)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string a;
    cout << "nhap vao mot xau: ";
    cin >> a;

    char c;
    cout << "nhap vao mot ky tu: ";
    cin >> c;

    if (containsChar(a, c))
    {
        cout << c << " co trong xau";
    }
    else
    {
        cout << c << " ko co trong xau";
    }
}