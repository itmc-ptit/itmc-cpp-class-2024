#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if (n>=2)
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout <<"so fibonacci thu ";
    cin >>n;
    cout <<fibonacci(n);
    
}
