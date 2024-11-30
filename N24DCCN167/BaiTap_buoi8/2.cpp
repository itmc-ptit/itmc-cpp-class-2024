#include <iostream>
using namespace std;
int findSizeofString(string str)
{
    int i = 0, count = 0;
    while (true)
    {
        if (str.find(str[i]) != str.npos)
        {
            count++;
            i++;
        }
        else
            break;
    }
    return count;
}
int main()
{
    string str = "abcxyz";
    cout << findSizeofString(str);
    return 0;
}