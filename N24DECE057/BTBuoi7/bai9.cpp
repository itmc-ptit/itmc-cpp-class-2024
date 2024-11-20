#include <iostream>
using namespace std;
int fibonacci(int n) {
    int a=0,b=1;
    for (int i=2;i<=n;i++) {
        int c=b;
        b+=a;
        a=c;
    }
    return b;
}
int main() {

    cout<<fibonacci(10);

    return 0;
}