#include <iostream>
#include <string>
using namespace std;

bool compareStr(const string &str1, const string &str2)
{
    return str1 == str2;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << boolalpha << compareStr(str1, str2);
    return 0;
}
