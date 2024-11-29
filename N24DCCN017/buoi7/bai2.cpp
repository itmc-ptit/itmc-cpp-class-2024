#include<iostream>
#include<math.h>
using namespace std;
bool isperfectnumber(int n){
    int dem=0;
    for(int i=2;i<=int(sqrt(n));i++){
        if(!(n%i)){
            dem+=i;
            dem+=n/i;
        }
    }
    if(dem+1==n) return true;
    else return false;
}

int main(){
    cout<<isperfectnumber(28);
}