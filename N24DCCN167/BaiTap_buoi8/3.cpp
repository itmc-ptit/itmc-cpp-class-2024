#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "abc";
    string str2 = "xyz";
    if (str1.compare(str2) == 0)
    {
        cout << "True";
    }
    else
        cout << "False";
    return 0;
}