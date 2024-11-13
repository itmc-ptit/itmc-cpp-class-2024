#include <iostream>

using namespace std;

bool checkChan(int n)
{
        if (n % 2 == 0) return true;
        
        return false;
}

int main()
{
    cout << "de ket thuc chuong trinh hay nhap so am \n";

    bool running = true;
    
    int tLe = 0;
    int tChan = 0;

    while (running)
    {
        int n = 0;
        cout << "hay nhap vao mot so nguyen: ";
        cin >> n;

        if (n < 0)
        {
            cout << "so luong so chan: " << tChan << "\n";
            cout << "so luong so le: " << tLe;

            running = false;
        }
        else if (n == 0)
        {
            continue;
        }
        else
        {
            checkChan(n) ? tChan++ : tLe++;
        }       
    }
    
}
