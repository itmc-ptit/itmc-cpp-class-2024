#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so : ";cin>>n;
    bool t=true;
    if (n<2) t=false;
    for (int i=2;i<=sqrt(n);i++) 
     if (n%i==0) t=false;
    if (t) cout<<n<<" la so nguyen to";
      else cout<<n<<" khong phai la so nguyen to";
    return 0;
}