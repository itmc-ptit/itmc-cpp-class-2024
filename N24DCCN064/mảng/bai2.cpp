#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int nn;
    int ln;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    nn=a[0];
    ln=a[0];
    for(int i=0; i<n-1; i++)
    {
        ln=max(ln, a[i+1]);
        nn=min(nn, a[i+1]);
    }
    cout << "Max: "<<ln<<endl;
    cout << "Min: "<<nn<<endl;

}