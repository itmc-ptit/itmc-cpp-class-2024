#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,u=0;
    cout<<"nhap so: ";cin>>n;
    for (int i=1;i<n;i++){
        if (n%i==0){
            u+=i;
        }
    }
    if (u==n){
        cout<<n<<" la so hoan hao";
    } else {
        cout<<n<<" ko la so hoan hao";
    }
}