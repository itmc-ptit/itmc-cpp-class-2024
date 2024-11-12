#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    float denta = (b*b)-4*a*c;
    float x1=(-b+sqrt(denta))/(2*a);
    float x2=(-b-sqrt(denta))/(2*a);
    if (a==0) cout<<(-c)/b; else 
    if (denta<0) cout<<"Vo Nghiem";
     else if (x1==x2) cout<<x1; else cout<<x1<<" "<<x2;
    return 0;
}