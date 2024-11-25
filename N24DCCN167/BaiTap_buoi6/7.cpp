#include <iostream>
using namespace std;
int main()
{
    int m, n, a, b;
    cout << "Nhap kich thuoc ma tran 1: " << endl;
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    int matrix1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan tu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Nhap kich thuoc ma tran 2: " << endl;
    cout << "Nhap so dong a: ";
    cin >> a;
    cout << "Nhap so cot b: ";
    cin >> b;
    int matrix2[a][b], sum[m][n];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Nhap phan tu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }
    if (m == a && n == b)
    {
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         sum = matrix1[i][j] + matrix2[i][j];
        //         cout << sum << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "Khong the tinh tong 2 ma tran. " << endl;

    return 0;
}