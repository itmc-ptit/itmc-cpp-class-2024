#include <iostream>
using namespace std;

int main(){
    int a;
    int k = 1;
    cout << "Nhap so:";
    cin >> a;
    for(int i = 1;i <= a;i++){
        for(int j = int(a-i);j > 0;j--){
            cout << " ";
            continue;
        }
        for(int l = 1; l <= k; l++){
            cout << "*";
            continue;
        }
        k += 2;
        cout << endl;
    }
    for(int i = 1;i <= (a-1);i++){
        cout << " ";
        continue;
    }
    cout << "*";
    return 0;
}