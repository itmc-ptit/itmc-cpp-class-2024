#include <iostream>
#include <math.h>
using namespace std;
void printPrimesInRange(int start, int end){
    if(start<2){
        start =2;
    }
    for (int i=start;i<=end;i++){
        bool snt=true;
        for (int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                snt=false;
                break;
            }
            }
        if(snt){
            cout <<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout <<"in so nguyen to trong khoang tu ";
    cin >>a;
    cout <<"den ";
    cin >>b;
    printPrimesInRange(a,b);
}