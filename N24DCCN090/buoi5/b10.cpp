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
    int m = 0;

    cout << "nhap vao chieu cao cua cay thong: ";
    cin >> n;
    cout << "nhap vao so luong cay thong: ";
    cin >> m;
    cout << "\n\n";

    for (int i = 0; i <= n; i++)
    {
        if (i != n)
        {
            in(" ", n-i-1);
            in("*", i*2 + 1);

            for (int j = 1; j < m; j++)
            {
                in(" ", n-i-1);
                in(" ", n-i-1);
                in("*", i*2 + 1);
            }
            
            cout << "\n";
        }
        else
        {
            in(" ", n-1);
            in("*", 1);       

            for (int j = 1; j < m; j++)
            {
                in(" ", n-1);
                in(" ", n-1);
                in("*", 1);
            }

            cout << "\n";
        }
    }
    cin >> n;
}