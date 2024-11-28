#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 1;
    int b = 1;
    int dem = 1;
    if((n == 1) || (n == 2)){
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}