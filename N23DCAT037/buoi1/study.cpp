#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin>>num;
    double b;
    double a[num];
    for (int i = 0; i<num; i++){
        cin>>b;
        a[i] = 10/3;
    }
    for (int i =0; i<num; i++){
        cout<<setprecision(15)<<a[i]<<endl;
    }
    return 0;
}
