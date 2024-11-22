#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "    Cau  lac    bo   ITMC    ";
    string newStr = "";
    vector<string> words;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            newStr += str[i];
        }
        else
        {
            if (newStr != "")
            {
                words.push_back(newStr);
                newStr = "";
            }
        }
    }
    if (str[str.length() - 1] != ' ')
        words.push_back(newStr);
    string res = "";
    for (int i = 0; i < words.size(); i++)
    {
        res = res + words[i];
        if (i != words.size() - 1)
            res += ' ';
    }
    cout << "'" << res << "'";
    return 0;
}