#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int dem=0;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]%2!=0)
        {
            dem=i;
        }
    }
    v.insert(v.begin() + dem, 13);
    for(int x:v)
    {
        cout << x << " ";
    }
}