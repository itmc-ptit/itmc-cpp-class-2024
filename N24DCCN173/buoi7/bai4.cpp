#include <bits/stdc++.h>
using namespace std;
int sumOddNumbers(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0) sum += arr[i];
    }
    return sum;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << sumOddNumbers(a,n);
    return 0;
}