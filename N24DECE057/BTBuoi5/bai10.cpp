#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cout<<"Nhap so : ";cin>>n;
    int i=2;
    cout<<n<<" = "; 
    if (n==1) cout<<1; 
   else while (n!=1) {
         int dem=0;
         while (n%i==0) {
             n/=i;
             dem++;
           }
        if (dem!=0)
         if (dem==1) {
            if (n==1) { cout<<i; break; }
            cout<<i<<" x ";
        } else {
            if (n==1) { cout<<i<<"^"<<dem; break; }
            cout<<i<<"^"<<dem<<" x ";
        }
        i++;
      }
}