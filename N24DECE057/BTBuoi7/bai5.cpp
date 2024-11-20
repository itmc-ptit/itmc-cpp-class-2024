#include <iostream>
#include <math.h>
using namespace std;
bool Primes(int n) {
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++)
     if (n%i==0) return false;
    return true;
}
void printPrimesInRange(int start,int end) {
     for (int i=start;i<=end;i++) 
       if (Primes(i)) cout<<i<<" ";
}
int main() {
    
    printPrimesInRange(1,10);
    
    return 0;
}