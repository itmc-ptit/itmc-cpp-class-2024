#include <iostream>
using namespace std;
int main()
{
    char letter;
    cin >> letter;
    if (letter >= 'A' && letter <= 'Z')
    {
        letter = letter + ('a' - 'A');
        cout << letter;
    }
    else
    {
        letter = letter - ('a' - 'A');
        cout << letter;
    }

    return 0;
}