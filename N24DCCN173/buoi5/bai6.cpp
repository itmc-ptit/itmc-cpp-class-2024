#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int cnt = n;
    int tmp = 0;
    vector<int> v;
    v.push_back(1);
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(n / i != i)
            {
                v.push_back(n/i);
            }
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        tmp += v[i];
    }
    if(tmp == cnt) cout << "Day la so hoan hao" << endl;
    else cout << "Day khong phai la so hoan hao" << endl;
    return 0;
}