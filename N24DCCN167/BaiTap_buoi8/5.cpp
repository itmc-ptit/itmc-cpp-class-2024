#include <iostream>
using namespace std;
int isFirstChar(string str, char c)
{
    if (str.find(c) == 0)
        return 0;
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
