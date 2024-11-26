#include <iostream>

using namespace std;

//cho phep nguoi dung in k lan mot chuoi nao do lien tiep
void in(string s, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << s;
    }  
}

int main()
{
    int n = 0;
    cout << "nhap vao chieu cao cua cay thong: ";
    cin >> n;
    cout << "\n\n";

    for (int i = 0; i < n; i++)
    {
        if (i != n)
        {
            in(" ", n-i-1);
            in("*", i*2 + 1);

            cout << "\n";
        }
        
    }
        
            in(" ", n-1);
            in("*", 1);
            cout << "\n";
        
    
}