#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string word = "";
    string words[15];
    int index = 0;

    for (char ch : str)
    {
        if (ch == ' ')
        {
            if (!word.empty())
            {
                words[index++] = word;
                word = "";
            }
        }
        else
        {
            word += ch;
        }
    }

    if (!word.empty())
    {
        words[index++] = word;
    }

    cout << "[";
    for (int i = 0; i < index; i++)
    {
        cout << "\"" << words[i] << "\"";
        if (i != index - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
