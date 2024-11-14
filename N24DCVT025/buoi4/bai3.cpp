//3
#include <bits/stdc++.h>
using namespace std;
int main(){
   float n,a;
   int b;
   cout<<"nhap n: ";cin>>n;
   a=sqrt(n);
   b=(int) a;
   if (a-b==0){
    cout << n <<" la so chinh phuong";
   }else{
    cout << n <<" k la so chinh phuong";
   }
   return 0;
}