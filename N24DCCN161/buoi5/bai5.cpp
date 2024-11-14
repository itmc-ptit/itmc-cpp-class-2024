#include <iostream>
#include <math.h>
using namespace std;
bool ngto(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main(){
    int a;
    cout<<"nhap so a: ";
    cin>>a;
    for (int i=1;i<a;i++){
        if(ngto(i)){
            if(ngto(i)<a){
                cout<<i<<endl;
            }
        }
    }
}