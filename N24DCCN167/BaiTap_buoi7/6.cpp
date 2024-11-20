#include <iostream>
using namespace std;
int countWords(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && str[i + 1] == ' ')
            count++;
    }
    return count + 1;
}
int main()
{
    string str;
    getline(cin, str);
    cout << countWords(str);
    return 0;
}