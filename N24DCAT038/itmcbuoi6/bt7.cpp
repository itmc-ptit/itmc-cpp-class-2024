#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;
    int mat1[row1][col1], mat2[row2][col2];

    cin >> row1 >> col1 >> row2 >> col2;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    if (row1 != row2 || col1 != col2)
    {
        cout << "Hai ma tran khong cung kich thuoc!" << endl;
        return 0;
    }

    int sum[row1][col1];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
