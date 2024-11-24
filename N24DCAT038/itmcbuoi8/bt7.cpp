#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string result = "";
    bool inWord = false;

    for (char ch : str)
    {
        if (ch != ' ')
        {
            result += ch;
            inWord = true;
        }
        else if (inWord)
        {
            result += ' ';
            inWord = false;
        }
    }

    if (!result.empty() && result[result.length() - 1] == ' ')
    {
        result.pop_back(); // Xóa khoảng trắng cuối cùng
    }

    cout << "\"" << result << "\"";

    return 0;
}
