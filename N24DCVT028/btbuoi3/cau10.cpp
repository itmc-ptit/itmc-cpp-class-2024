#include <iostream>
using namespace std;

int main()
{
    char chuso;
    cout << "nhap chu so muon doi = ";
    cin >> chuso;
    if (chuso >= 'A' &&chuso <= 'Z')
    {
        chuso = chuso - ('A' - 'a');
        cout << "chu hoa cua chuso la = " << chuso;
    }
    else
        (chuso >= 'a' &&chuso <= 'z');
        {
            chuso = chuso - ('a' - 'A');
            cout << "chu thuong cua chuso la = " << chuso;
        }
}