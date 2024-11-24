#include <iostream>
#include <string>
using namespace std;

bool containsChar(string str, char c)
{
    for (char ch : str)
    {
        if (ch == c)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str;
    char c;
    cin >> str;
    cin >> c;
    cout << (containsChar(str, c) ? "true" : "false") << endl;
    return 0;
}
