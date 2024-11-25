#include <bits/stdc++.h>
using namespace std;
int main(){
    int l=0,c=0,a;
    cout<<"nhap so: ";cin>>a;
    while(a>=0){
        if (a%2==0){
            c+=1;
        } else {
            l+=1;
        }
        cout<<"nhap tiep: ";cin>>a;
    }
    cout<<"so luong so chan: "<<c<<"\n";
    cout<<"so luong so le: "<<l;
}