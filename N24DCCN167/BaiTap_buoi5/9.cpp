#include <iostream>
using namespace std;
int main()
{
    int n = 5,m = 5;
    int MAX_PINETREE_IN_ROW = 5;
    int k_to = n / MAX_PINETREE_IN_ROW;
    if (n % MAX_PINETREE_IN_ROW > 0)
        k_to+=1;
    
    for (int k = 0; k < k_to; k++){
        int p_to = MAX_PINETREE_IN_ROW;
        if (n - p_to * (k+1) < 0)
            p_to = n % MAX_PINETREE_IN_ROW;
        for (int i = 0; i <= m; i++)
        {
            for (int p = 0; p < p_to; p++)
            {
                cout << "   ";
                for (int j = ((2 * m - 1) - (2 * i - 1)) / 2; j > 0; j--)
                {
                    cout << " ";
                }
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    cout << "*";
                }
                for (int j = ((2 * m - 1) - (2 * i - 1)) / 2; j > 0; j--)
                {
                    cout << " ";
                }
            }

            cout << endl;
        }

        for (int p = 0; p < p_to; p++)
        {
            cout << "   ";
            for (int j = ((2 * m - 1) - (2 * 1 - 1)) / 2; j > 0; j--)
            {
                cout << " ";
            }
            for (int j = 0; j < 1; j++)
            {
                cout << "*";
            }
            for (int j = ((2 * m - 1) - (2 * 1 - 1)) / 2; j > 0; j--)
            {
                cout << " ";
            }
        }
        cout << " ";
        cout << endl << endl;

    }
    

    return 0;
}