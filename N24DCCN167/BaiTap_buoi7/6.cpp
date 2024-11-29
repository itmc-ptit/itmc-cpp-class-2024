#include <iostream>
using namespace std;
int countWords(string str)
{
    int count = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
            count++;
    }
    if (str[str.length() - 1] != ' ')
        return count + 1;

    return count;
}
int main()
{
    string str;
    getline(cin, str);
    cout << countWords(str);
    return 0;
}