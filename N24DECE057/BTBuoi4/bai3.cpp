#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;cin>>n;
    float s=sqrt(float(n));
    int kt=int(s)*int(s);
    if (kt==n) cout<<"La so cp"; else cout<<"Khong phai la so cp";
    return 0;
}
