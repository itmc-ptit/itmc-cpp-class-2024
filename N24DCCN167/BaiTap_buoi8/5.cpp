#include <iostream>
using namespace std;
int isFirstChar(string str, char c)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.find(c) != str.npos)
            return str.find(c);
    }
    return -1;
}
int main()
{
    string str;
    cin >> str;
    char c;
    cin >> c;
    cout << isFirstChar(str, c) << endl;

    return 0;
}
