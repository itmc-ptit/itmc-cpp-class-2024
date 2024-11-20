#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    if(n == 2 || n == 3) return true;
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void printPrimesInRange(int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        if(nt(i)) cout << i << " ";
    }
}
int main()
{
    int a, b; cin >> a >> b;
    printPrimesInRange(a, b);
    return 0;
}