#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    while (n!=24) {
        cout<<"Nhap so : ";cin>>n;
        if (n==24) break;
        if (n<24) cout<<"Nho hon so can doan"<<endl;
           else cout<<"Lon hon so can doan"<<endl;
    }
    cout<<"You win";
    return 0;
}