#include <iostream>
using namespace std;
int main()
{
    string str = "    Cau  lac    bo   ITMC    ";
    while (str[0] == ' ')
    {
        str.erase(0, 1);
    }
    while (str[str.length() - 1] == ' ')
    {
        str.erase(str.length() - 1, 1);
    }
    int i = 0;
    while (i < str.length() - 1)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
            i--;
        }
        i++;
    }
    for (int i = 0; i < str.length(); i++)
        cout << str[i];

    return 0;
}
