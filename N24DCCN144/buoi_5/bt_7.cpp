#include <iostream>

using namespace std;

int main()
{
    const int number = 24;
    int n = 0;

    bool running = true;

    cout << "tro choi doan doan dung thi nghi choi \n\n";
    while (running)
    {
        cout << "hay nhap mot so bat ki: ";
        cin >> n;

        if (number == n) 
        {
            running = false;
            cout << "ban da chien thang";
        }
        else 
        {
            if (n > number) cout << "lon hon so can doan, ";
            else cout << "nho hon so can doan, ";
        }
    }
    
}