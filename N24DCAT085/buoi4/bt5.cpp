#include <iostream>
using namespace std;
main (){
    int a,maxa;
    cout<<"1:";
    cin>>maxa;
    for (int i=2;i<=4;++i) {cout<<i<<';';cin>>a;
    maxa=(maxa>a)?maxa:a; }  
    cout<<maxa;
}