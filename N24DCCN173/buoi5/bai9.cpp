#include <bits/stdc++.h>
using namespace std;
// n là tầng, m là cây nha mấy anh;
int main()
{
    int n, m; cin >> n >> m;
    int chieu_ngang = (2*n - 1)*m;
    //tao ngan xep tim cac trung diem cua cac cay
    queue<int> qe;
    queue<int> qe1;
    int trung_diem_1cay = (2*n - 1)/2;
    int nua_chieu_ngang_1cay = 2*n - 1;
    qe.push(trung_diem_1cay);
    for(int i = 1; i < m; i++)
    {
        trung_diem_1cay += nua_chieu_ngang_1cay;
        qe.push(trung_diem_1cay);
    }
    //tao cay
    int a = 0;
    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < chieu_ngang; j++)
            {
                if(j >= qe.front() - a && j <= qe.front() + a)
                {
                    cout << "*";
                    if(j + 1 > qe.front() + a)
                    {
                        qe1.push(qe.front());
                        qe.pop();
                        if(qe.empty()) break;
                    }
                }
                else cout << " ";
            }
            ++a;
            while(!qe1.empty())
            {
                qe.push(qe1.front());
                qe1.pop();
            }
            cout << endl;
            if(i+1==n) a = 0;
    }
    return 0;
}