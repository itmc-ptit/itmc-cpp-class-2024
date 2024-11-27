#include<iostream>
#include<math.h>
using namespace std;
bool kiemtra(int n){
    bool kt=true;
    if(n==2) kt=true;
    else if(n<=1) kt=false;
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
    cout<<"nhap 1 so >1 can phan tich: ";cin>>x;
    /*while(x<=1){
        cout<<"nhap 1 so >1 can phan tich: ";cin>>x;
    }*/
    int i=2;
    while(x!=1){
        int mu=1;
        if(kiemtra(i)){
            if(!(x%i)){
                cout<<i;
                x/=i;
                if(!(x%i)){
                    cout<<"^";
                    while(!(x%i)){
                        mu+=1;
                        x/=i;
                    }
                    cout<<mu;
                }
            if(x!=1) cout<<" x ";
            }
            
        }
        i++;
    }
}