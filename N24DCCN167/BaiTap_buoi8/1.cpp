#include <iostream>
using namespace std;
string reverseString(string str)
{
    string newStr;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        newStr += str.at(i);
    }
    return newStr;
}
int main()
{
    string str = "abc";
    cout << reverseString(str) << endl;
    return 0;
}