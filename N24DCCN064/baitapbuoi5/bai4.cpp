#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
/*int main()
{
    
    int n; cin >> n;
    int a[n]; 
    int b[100000]={0};
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int thu1=b[0];
    int thu2=0;
    for(int i=0; i<100000-1; i++)
    {
        thu1=max(thu1, b[i+1]);
        if(max(thu1, b[i+1])==b[i+1])
        {
            thu2=i+1;      
        }
    }
    cout <<"so: " << thu2 <<"\n";
    cout <<"so lan " << thu1;   
}*/
int main()
{
    int n;
    int dem1=1;
    
    int dem3=1;
    cin >> n;
    
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int dem2=a[0];
    sort(a, a+n);
    for(int i=1; i<n; i++)
    {
        if(a[i]==a[i-1])
        {
            dem1++;
        }
        else
        {
            if(dem1>dem3)
            {
                dem3=dem1;
                dem1=1;
                dem2=a[i-1];
            }
        }
    }
    if(dem1>dem3)
            {
                dem3=dem1;
                dem2=a[n-1];
            }
    cout <<"so " << dem2 << "\n";
    cout <<"so lan "<< dem3;
}
