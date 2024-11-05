#include <iostream>
using namespace std;
int main() {
    int n,m;cin>>m>>n;
    // int i=m;m=n;n=i;
    m+=n;
    n=m-n;
    m-=n;
    cout<<m<<" "<<n;
    return 0;
}