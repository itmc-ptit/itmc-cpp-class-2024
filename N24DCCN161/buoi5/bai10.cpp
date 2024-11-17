#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2;
    while(n > 1){
        int d = 0;
        if(n % i == 0){
            while((n % i) == 0){
                d++;
                n = n/i;
            }
            if(d == 1){
                cout << i;
                if(n > 1){
                cout << " x ";
                }
            }
            if(d > 1){
                cout << i << "^" << d;
                if(n > 1){
                cout << " x ";
                }
            }
        }else{
            i++;
        }
    }
    return 0;
}
