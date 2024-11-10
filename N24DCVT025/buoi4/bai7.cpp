//7
#include <bits/stdc++.h>
using namespace std;
int main(){
      //ax+b=0
    float a,b,x;
    cout<<"nhap a: ";cin>>a;
    cout<<"nhap b: ";cin>>b;
    if (a==0){
        if (b==0){
            cout<<"ptvsn";
        } else{
            cout<<"ptvn";
        }
    }
    else{
        x=-b/a;
        cout<<x;
    }
    return 0;
}