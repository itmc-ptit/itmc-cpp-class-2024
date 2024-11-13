#include<iostream>
#include<math.h>
using namespace std;
bool kiemtra(int n){
    bool kt=true;
    if(n==2) kt=true;
    else {
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0) {
            kt=false; 
            break;
            }
    }
    }
    return kt;
}
int main(){
    int x;
    cout<<"nhap 1 so can phan tich: ";cin>>x;
    for(int i=2;i<=int(sqrt(x));i++){
        int mu=1;
        if(kiemtra(i)){
            if(!(x%i)){
                cout<<i;
                x/=i;
            }
            if(!(x%i)){
                cout<<"^";
                while(!(x%i)){
                    mu+=1;
                    x/=i;
                }
                cout<<mu;
            }
        if(x!=1)cout<<" x ";
        }
    }

}