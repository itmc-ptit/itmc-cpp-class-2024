#include <bits/stdc++.h>
using namespace std;
int main() {
    int max1=INT_MIN;
    for (int i=0;i<4;i++) {
        int n;cin>>n;
        if (n>max1) max1=n;
    }
    cout<<max1;
    return 0;
}