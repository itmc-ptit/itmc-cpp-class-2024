#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "    Cau   lac bo   ITMC  Cua  Toi";
    string newStr = "";
    vector<string> res;
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
                res.push_back(newStr);
                newStr = "";
            }
        }
    }
    if (str[str.length() - 1] != ' ')
        res.push_back(newStr);
    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        if (i == res.size() - 1)
        {
            cout << '"' << res[i] << '"';
            break;
        }
        cout << '"' << res[i] << '"' << ",";
    }
    cout << "]";

    return 0;
}
