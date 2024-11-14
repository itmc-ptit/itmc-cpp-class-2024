#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int cnt = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i != n/i)
            {
                cnt += i;
                cnt += n/i;
            }
        }
    }
    if(cnt == n) cout << "Day la so hoan hao" << endl;
    else cout << "Day khong phai la so hoan hao" << endl;
    return 0;
}