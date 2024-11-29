#include <iostream>
using namespace std;
    int main()
    {
        int n, n1, m, m1;
        cout <<"nhap so phan tu mang 1 : ";
        cin>>n>>m;
        cout <<"nhap so phan tu mang 2 : ";
        cin>> n1>>m1; 
        if (n!=n1 || m!=m1) 
        {
            cout<<" khong can tinh toan gi nua 2 ma tran nay ko the cong laij dau!!!!!!!!!";
            return 0;
        }
        cout<<"nhap mang 1 vao : ";
        int a[n][m];
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"nhap mang 2 vao : ";
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   
               int k;
                cin>>k;
               a[i][j]+=k;
            }
        }
           cout << " mang sau  khi cong la: \n";
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }    
