#include <bits/stdc++.h>
using namespace std;
int main() {
    int dem=0,dem1=0;
    while (true) {
        int n;
        cout<<"Nhap so : ";cin>>n;
        if (n<0) break;
        if (n%2==0) dem++; else dem1++;
    }
    cout<<"Co "<<dem<<" so chan"<<endl;
    cout<<"Co "<<dem1<<" so le"<<endl;
    return 0;
}