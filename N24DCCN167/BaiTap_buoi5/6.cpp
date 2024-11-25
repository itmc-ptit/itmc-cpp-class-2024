#include <iostream>
using namespace std;
int main()
{
    long long sum = 0;
    int n;
    cin >> n;
    for (int i = 1;i <= n/2;i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        cout << "Perfect Number" << endl;
    }
    return 0;
}
