//6
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cout<<"nhap nam: ";cin>>n;
    if (n%100==0 && n%400==0){
          cout<<n<<" la nam nhuan";
    }else if (n%100!=0 && n%4==0){
          cout<<n<<" la nam nhuan";
    }else{
          cout<<n<<" k la nam nhuan";
    }
    return 0;
}