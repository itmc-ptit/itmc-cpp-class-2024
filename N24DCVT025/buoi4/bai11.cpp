//10
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"nhap a: ";cin>>a;
    while(a>100){
        cout<<"nhap lai a sao cho a<=100: ";cin>>a;
    }
    string dv[]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    string c[]={"","muoi","hai muoi","ba muoi","bon muoi","nam muoi","sau muoi","bay muoi","tam muoi","chin muoi","mot tram"};
    if (a<10){
        cout<<dv[a];
    } else if (a<10 && a<20) {
        cout<<c[1]<<dv[a%10];
    } else{
        cout<<c[a/10]<<" "<<dv[a%10];
    }
    return 0;
}