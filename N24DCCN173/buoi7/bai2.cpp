#include <bits/stdc++.h>
using namespace std;
bool perfect(int n)
{
    int sum = 1;
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            sum += i;
            if(n/i != i)
            {
                sum += n/i;
            }
        }
    }
    if(sum == n) return true;
    else return false;
}
int main()
{
    int n; cin >> n;
    if(perfect(n)) cout << "True" << endl;
    else cout << "False" << endl;
}