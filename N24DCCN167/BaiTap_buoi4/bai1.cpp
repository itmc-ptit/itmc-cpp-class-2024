#include <iostream>
using namespace std;
int main()
{
    char letter;
    cin >> letter;
    if (letter >= 'A' && letter <= 'Z')
    {
        cout << "Chu Hoa" << endl;
    }
    else
        cout << "Chu Thuong" << endl;
    return 0;
}