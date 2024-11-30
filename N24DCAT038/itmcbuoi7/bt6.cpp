#include <iostream>
#include <string>
using namespace std;

int countWords(string str)
{
    int count = 0;
    bool inWord = false;
    for (char ch : str)
    {
        if (ch != ' ')
        {
            if (!inWord)
            {
                count++; // Bắt đầu một từ mới
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }
    return count;
}

int main()
{
    string str;
    getline(cin, str);

    cout << countWords(str) << endl;

    return 0;
}
