#include <iostream>
#include <cctype>
using namespace std;
string to_lower(string str)
{
    for (int i = 0;i < str.length();i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] -= 'A' - 'a';
        }
    }
    return str;
}
int main()
{
    string str = "ABC";
    cout << to_lower(str);
    return 0;
}