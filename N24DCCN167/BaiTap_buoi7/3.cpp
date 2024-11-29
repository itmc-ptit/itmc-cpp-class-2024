#include <iostream>
#include <cmath>
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
    string str;
    cin >> str;
    char c;
    cin >> c;
    if (containsChar(str, c))
        cout << "True";
    else
        cout << "False";
    return 0;
}