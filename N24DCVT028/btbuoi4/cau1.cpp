#include <iostream>
using namespace std;

int main()
{
    char chuso;
    cout << "nhap chu so muon kiem tra = ";
    cin >> chuso;
    if (chuso >= 'A' && chuso <= 'Z')
    {
        cout << "ki tu la chu hoa " << endl;
        return 0;
    }
    if (chuso >= 'a' && chuso <= 'z')
        ;
    {

        cout << "ki tu la chu thuong ";
    }
}