#include <iostream>
using namespace std;
int main() {
    int n,m;cin>>m>>n;
    m+=n;
    n=m-n;
    m-=n;
    cout<<m<<" "<<n;
    return 0;
}