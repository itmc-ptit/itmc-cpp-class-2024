#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cout<<"nhap so bat ki: ";cin>>n;
    if (n<=1){
        cout<<n<<" ko la so ngto";
    }
    for (int i=2;i<sqrt(n);i++){
        if (n%i==0){
            x+=1;
        }
    }
    if (x>0){
        cout<<n<<" ko la so ngto";
    } else {
        cout<<n<<" la so ngto";
    }
}