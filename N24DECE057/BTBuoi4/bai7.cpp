#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float m;cin>>m;
    int n;cin>>n;
    float sum=m+float(n);
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}