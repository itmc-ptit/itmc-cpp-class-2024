#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,kq;
    cout<<"nhap 1 so de kiem tra: ";cin>>n;
    for(int i=2;i<=int(sqrt(n));i++){
        if(!(n%i)){
            kq+=i;
            kq+=int(n/i);
        }
    }
    if(kq+1==n)cout<<n<<" la so hoan hao";
    else cout<<n<<" khong phai la so hoan hao";

}