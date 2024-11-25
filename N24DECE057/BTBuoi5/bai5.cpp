#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cout<<"Nhap so : ";cin>>n;
    for (int i=n-1;i>=2;i--) {
        bool t=true;
        if (i<2) t=false;
        for (int j=2;j<=sqrt(i);j++) 
          if (i%j==0) {
            t=false;
            break;
          }
        if (t) cout<<i<<" ";
    }
    return 0;
}