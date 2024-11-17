#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int s=0;
    for (int i=1;i<=(n/2);i++){
        if (n%i==0){
            s=s+i;
        } 
    }
    if (s==n){
            cout<<n<<' '<<"la so hoan hao";
        }else{
            cout<<n<<' '<<"khong la so hoan hao";
        }
}