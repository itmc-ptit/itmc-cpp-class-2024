#include <iostream>
using namespace std;
int isFirstChar(string str, char c)
{
    if (str.find(c) == 0)
        return 0;
    return -1;
}
int main()
{
    cout << isFirstChar("ABC", 'A') << endl;

    return 0;
}