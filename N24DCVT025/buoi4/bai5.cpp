//5
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,max;
    cout<< "nhap so thu 1: ";cin>>a;
    max=a;
    for (int i=1;i<4;i++){
        cout<< "nhap so thu "<<i+1<<": ";cin>>a;
        if (a>max){
            max =a;
        }
    }
    cout<<"so lon nhat trong 4 so la: "<<max;
    return 0;
}