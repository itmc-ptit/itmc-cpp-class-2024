#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float x1,y1,x2,y2,dodai;
    cout<<"nhap x1,y1 ";
    cin >>x1>>y1;
    cout<<"nhap x2,y2 ";
    cin>>x2>>y2;
    dodai=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<dodai;

}
