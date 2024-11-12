#include <iostream>
using namespace std;
int main() {
    float a,b;cin>>a>>b;
    if (a==0 && b==0) cout<<"Vo so ngiem";
     else if (a==0 && b!=0) cout<<"Vo nghiem"; 
       else {
              float x=(-b)/a;
              cout<<x;
        }   
    return 0;
}