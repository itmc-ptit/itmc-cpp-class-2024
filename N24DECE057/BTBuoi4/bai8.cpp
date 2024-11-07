#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    if (a+b<c || a+c<b || b+c<a) cout<<"Khong Phai La Tam Giac"; 
     else if (a==b && a==c) cout<<"La Tam Giac Deu"; 
      else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) cout<<"La Tam Giac Vuong"; 
        else if (a==b || a==c || b==c) cout<<"La Tam Giac Can"; 
          else cout<<"La Tam Giac Thuong";
    return 0;
}