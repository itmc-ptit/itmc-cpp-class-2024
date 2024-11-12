#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Nhap n = ";cin>>n;
    int i=1,m=n-1,f=1;
    while (i<=n) {
      for (int j=0;j<m;j++) cout<<" ";
      for (int k=0;k<f;k++) cout<<"*";
      cout<<endl;
      i++;
      m--;
      f+=2;
    }
    for (int i=0;i<n-1;i++) cout<<" ";
    cout<<"*";
    return 0;
}