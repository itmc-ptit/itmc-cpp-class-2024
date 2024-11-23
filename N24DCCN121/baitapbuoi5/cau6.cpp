#include <iostream>
using namespace std;

int main(){
    int a;
    int sum = 0;
    cout << "Nhap so:";
    cin >> a;
    for(int i = 1;i < a/2;i++){
        if((a % i) == 0){
            sum += i;
        }
    }
    if(sum == a){
        cout << a << " la so hoan hao";
    }else{
        cout << a << " khong la so hoan hao";
    }
    return 0;
}