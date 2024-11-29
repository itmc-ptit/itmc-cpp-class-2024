#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cout<<"Nhap so : ";cin>>n;
    int sumuc=0;
    for (int i=1;i<=n/2;i++) 
       if (n%i==0) sumuc+=i;
    if (sumuc==n) cout<<n<<" la so hoan hao";
       else cout<<n<<" khong phai la so hoan hao";
    return 0;
}