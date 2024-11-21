#include <iostream>

using namespace std;
int main()
{
    cout << "de ket thuc chuong trinh hay nhap so am \n";

    bool running = true;
    
    int tLe = 0;
    int tChan = 0;
    int n;
    while (running)
    {
        
        cout << "hay nhap vao mot so nguyen: ";
        cin >> n;

        if (n < 0)
        {
            cout << "so luong so chan: " << tChan << "\n";
            cout << "so luong so le: " << tLe;

            running = false;
        }
        else
        {
            n%2==0 ? tChan++ : tLe++;
        }       
    }
}
