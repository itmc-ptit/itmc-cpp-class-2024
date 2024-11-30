#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "so cay thong: ";
    cin >> m;
    cout << "chieu cao: ";
    cin >> n;
    int sao = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            for(int k = int(n-i);k > 0;k--){
                cout << " ";
            }
            for(int l = 1;l <= sao;l++){
                cout << "*";
            }
            for(int k = int(n-i);k > 0;k--){
                cout << " ";
            }
        }
        sao += 2;
        cout << endl;
    }
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= (n-1);j++){
            cout << " ";
        }
        cout << "*";
        for(int j = 1;j <= (n-1);j++){
            cout << " ";
        }
    }
    return 0;
}
