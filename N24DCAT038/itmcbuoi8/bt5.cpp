#include <iostream>
#include <string>
using namespace std;

int findCharPosition(const string &str, char c)
{
    size_t pos = str.find(c);
    return (pos != string::npos) ? pos : -1;
}

int main()
{
    string str;
    char c;
    cin >> str >> c;
    cout << findCharPosition(str, c);
    return 0;
}
