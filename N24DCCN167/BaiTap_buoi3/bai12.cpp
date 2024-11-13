#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num >= 0 && num <= 255)
    {
        char ASCII_Char = static_cast<char>(num);
        cout << ASCII_Char << endl;
    }
    else
    {
        cout << "Please Enter Again." << endl;
    }
    return 0;
}
