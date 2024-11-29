#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 24;
    int a; cin >> a;
    while(a != 24)
    {
        if(a > 24) cout << "Nho hon so voi so can doan" << endl;
        else cout << "Lon hon so voi so can doan" << endl;
        cin >> a;
    }
    if(a == 24) cout << "Dung cmnr"<< endl;
    return 0;
}