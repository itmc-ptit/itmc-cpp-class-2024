#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tmp = 0;
    int cnt = 1;
    int cnt1 = 1;
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++)
    {
        if(a[i]== a[i+1])
        {
            ++cnt;
        }
        else if(cnt >= cnt1)
        {
            tmp = a[i];
            cnt1 = cnt;
            cnt = 1;
        }
    }
    if(cnt1 == 1) cout << "Khong co phan tu trung lap";
    else
    {
        cout << tmp <<"xuat hien " << " " << cnt1;
    }
    return 0;
}