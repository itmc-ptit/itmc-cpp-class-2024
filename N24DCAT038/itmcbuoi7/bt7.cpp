#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str)
{
    string result = "";
    for (char ch : str)
    {
        if (result.find(ch) == string::npos)
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string str;
    getline(cin, str);

    cout << removeDuplicates(str);

    return 0;
}
