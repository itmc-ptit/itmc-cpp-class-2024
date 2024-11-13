#include <iostream>
using namespace std;
bool checkPrime(int n) {
    if (n < 2) return false;
    for (int i = 2;i < n;i++) {
        if (n % 2 == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    // if (n < 2)
    // {
    //     cout << "is not prime" << endl;
    // }
    // else
    // {
    //     for (int i = 2; i < n; i++)
    //     {
    //         if (n % i == 0) {
    //             cout << "is not prime" << endl;
    //             return 0;
    //         }
    //     }
    //     cout << "is prime" << endl;
    // }
    cout << checkPrime(n) << endl;
}