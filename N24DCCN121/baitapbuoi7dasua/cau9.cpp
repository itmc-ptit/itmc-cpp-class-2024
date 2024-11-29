#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0;
    int b = 1;
    int result;
    for(int i = 1;i < n;i++){
        result = a+b;
        b = result;
        a = result-a;
    }
    return result;
}